/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:42:49 by gbertin           #+#    #+#             */
/*   Updated: 2021/12/24 14:25:37 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		ft_checksplit(char **split)
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

int		ft_checkargv(char *argv)
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

t_list  *ft_fill_lst(char **split)
{
	t_list  *liste;
	int		i;

	i = 0;
	if (!ft_checksplit(split))
	{
		write(2, "Entrée incorrect\n", 19);
		return (NULL);
	}
	liste = ft_initlst(ft_atoi(split[i]));
	i++;
	while (split[i])
	{
		ft_addend(liste, ft_atoi(split[i]), 'A');
		i++;
	}
	return (liste);	
}

t_list	*ft_fill_lst2(char **argv)
{
	t_list	*liste;
	int		i;
	
	i = 1;
	liste = ft_initlst(ft_atoi(argv[i]));
	i++;
	while (argv[i])
	{
		if (ft_checkargv(argv[i]))
			ft_addend(liste, ft_atoi(argv[i]), 'A');
		else
		{
			write(2, "Entrée incorrect\n", 19);
			return (NULL);
		}
		i++;
	}
	return (liste);
}