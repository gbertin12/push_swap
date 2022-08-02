/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:42:49 by gbertin           #+#    #+#             */
/*   Updated: 2022/08/02 15:02:50 by gbertin          ###   ########.fr       */
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

t_list	*ft_fill_by_split(t_list *liste, char **split, int init)
{
	int		i;

	i = 0;
	if (split[0] == NULL)
		return (ft_msg_err_fill_by_split(split));
	if (!ft_checksplit(split))
	{
		if (init != 1)
			ft_free_struct(liste);
		return (ft_msg_err_fill_by_split(split));
	}
	if (init == 1)
	{
		if (!ft_check_max_int(split[i]))
			return (ft_msg_err_fill_by_split(split));
		liste = ft_initlst(ft_atoi(split[i]));
		i++;
	}
	if (ft_browse_split(split, liste, i))
	{
		ft_free_split(split);
		return (liste);
	}
	return (0);
}

t_list	*ft_browse_split(char **split, t_list *liste, int i)
{
	while (split[i])
	{
		if (!ft_check_max_int(split[i]))
		{
			ft_free_struct(liste);
			return (ft_msg_err_fill_by_split(split));
		}
		ft_addend(liste, ft_atoi(split[i]), 'A');
		i++;
	}
	return (liste);
}

t_list	*ft_fill_lst(int argc, char **argv)
{
	t_list	*liste;
	char	**split;
	int		i;

	i = 1;
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		if (split[0] == NULL)
			return (ft_err_split_zero(i, split, argc, liste));
		liste = ft_fill_by_split(liste, split, i);
		if (!liste)
			return (0);
		i++;
	}
	return (liste);
}
