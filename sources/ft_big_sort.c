/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:42:11 by gbertin           #+#    #+#             */
/*   Updated: 2022/07/21 10:44:27 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_big_sort(t_list *liste)
{
	int	size_lst;
	int	max_num;
	int	max_bits;
	int	index;
	int	i;

	size_lst = ft_count_size(liste->first_a);
	max_num = size_lst + 1;
	i = 0;
	max_bits = ft_find_max_bits(max_num);
	while (i++ < max_bits)
	{
		size_lst = ft_count_size(liste->first_a);
		while (size_lst--)
		{
			index = liste->first_a->index;
			if (((index >> i) & 1) == 1)
				ft_rotate_a(liste);
			else
				ft_push_b(liste);
		}
		ft_push_all_b(liste);
	}
}

void	ft_push_all_b(t_list *liste)
{
	while (liste->first_b)
		ft_push_a(liste);
}

int	ft_find_max_bits(int max_num)
{
	int	max_bits;

	max_bits = 0;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}
