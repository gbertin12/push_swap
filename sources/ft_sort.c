/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 01:04:58 by gbertin           #+#    #+#             */
/*   Updated: 2022/06/04 12:40:58 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*ft_sort(t_list *liste)
{
	int i;
	int y;
	int num;
	int size;


	i = 0;
	size = ft_count_size(liste->firstA);
	while (!ft_is_sorted(liste))
	{
		y = 0;
		while (y < size)
		{
			num = liste->firstA->nombre;
			if (((num >> i)&1) == 1)
				ft_rotate_a(liste);
			else
				ft_push_b(liste);
			y++;
		}
		while (liste->firstB)
			ft_push_a(liste);
		i++;
	}
	return (liste);
}

int		ft_is_sorted(t_list *liste) // good
{
	elem_list *elem;
	elem_list *elem_sup;

	elem = liste->firstA;
	elem_sup = elem->next;
	while (elem_sup)
	{
		if (elem->nombre > elem_sup->nombre)
			return (0);
		elem = elem_sup;
		elem_sup = elem->next;
	}
	return (1);
}

int		ft_count_size(elem_list *elem) // good
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