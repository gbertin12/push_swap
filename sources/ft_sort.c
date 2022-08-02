/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 01:04:58 by gbertin           #+#    #+#             */
/*   Updated: 2022/07/20 15:02:06 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*ft_sort(t_list *liste)
{
	int	i;
	int	y;
	int	num;
	int	size;

	i = 0;
	size = ft_count_size(liste->first_a);
	while (!ft_is_sorted(liste))
	{
		y = 0;
		while (y < size)
		{
			num = liste->first_a->index;
			if (((num >> i) & 1) == 1)
				ft_rotate_a(liste);
			else
				ft_push_b(liste);
			y++;
		}
		while (liste->first_b)
			ft_push_a(liste);
		i++;
	}
	return (liste);
}

int	ft_is_sorted(t_list *liste)
{
	t_elem_list	*elem;
	t_elem_list	*elem_sup;

	elem = liste->first_a;
	elem_sup = elem->next;
	while (elem_sup)
	{
		if (elem->index > elem_sup->index)
			return (0);
		elem = elem_sup;
		elem_sup = elem->next;
	}
	return (1);
}

int	ft_count_size(t_elem_list *elem)
{
	int			i;

	i = 0;
	while (elem)
	{
		elem = elem->next;
		i++;
	}
	return (i);
}
