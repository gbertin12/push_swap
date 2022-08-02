/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:42:49 by gbertin           #+#    #+#             */
/*   Updated: 2022/07/27 10:00:02 by gbertin          ###   ########.fr       */
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
		if (split[i][y] == '-')
				y++;
		while (split[i][y])
		{
			if (split[i][y] == 0)
				return (0);
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
	if (argv[i] == 0)
		return (0);
	if (argv[i] == '-')
		i++;
	if (!ft_check_max_int(argv))
		return (0);
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
	if (split[0] == NULL)
		return (ft_msg_err_fill_by_split(split));
	if (!ft_checksplit(split))
		return (ft_msg_err_fill_by_split(split));
	if (!ft_check_max_int(split[i]))
		return (ft_msg_err_fill_by_split(split));
	liste = ft_initlst(ft_atoi(split[i]));
	i++;
	while (split[i])
	{
		if (!ft_check_max_int(split[i]))
			return (ft_msg_err_fill_by_split(split));
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
	{
		write(STDERR_FILENO, "Error\n", 6);
		return (0);
	}
	i++;
	while (argv[i])
	{
		if (ft_checkargv(argv[i]))
			ft_addend(liste, ft_atoi(argv[i]), 'A');
		else
		{
			ft_free_during_filling(liste);
			write(STDERR_FILENO, "Error\n", 6);
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
