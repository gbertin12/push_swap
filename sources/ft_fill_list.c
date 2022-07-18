/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:42:49 by gbertin           #+#    #+#             */
/*   Updated: 2022/07/18 16:12:07 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_checksplit(char **split)
{
	int		i;
	int		y;

	i = 0;
	while (split[i])
	{
		y = 0;
		while (split[i][y])
		{
			if (!ft_isdigit(split[i][y]))
				return (0);
			y++;
		}
		i++;
	}
	return (1);
}

int	ft_checkargv(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (!ft_isdigit(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

t_list	*ft_fill_by_split(char **split)
{
	t_list	*liste;
	int		i;

	i = 0;
	if (!ft_checksplit(split))
	{
		write(2, "Entrée incorrect\n", 19);
		ft_free_split(split);
		return (NULL);
	}
	liste = ft_initlst(ft_atoi(split[i]));
	i++;
	while (split[i])
	{
		ft_addend(liste, ft_atoi(split[i]), 'A');
		i++;
	}
	ft_free_split(split);
	return (liste);
}

t_list	*ft_fill(char **argv)
{
	t_list	*liste;
	int		i;

	i = 1;
	if (ft_checkargv(argv[i]))
		liste = ft_initlst(ft_atoi(argv[i]));
	else
		return (0);
	i++;
	while (argv[i])
	{
		if (ft_checkargv(argv[i]))
			ft_addend(liste, ft_atoi(argv[i]), 'A');
		else
		{
			ft_free_during_filling(liste);
			write(2, "Entrée incorrect\n", 19);
			return (NULL);
		}
		i++;
	}
	return (liste);
}

t_list	*ft_fill_lst(int argc, char **argv)
{
	t_list	*liste;

	if (argc == 2)
	{
		liste = ft_fill_by_split(ft_split(argv[1], ' '));
		if (liste == NULL)
			return (0);
	}
	else
	{
		liste = ft_fill(argv);
		if (liste == NULL)
			return (0);
	}
	return (liste);
}
