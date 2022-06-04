/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_little_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 21:48:40 by gbertin           #+#    #+#             */
/*   Updated: 2022/06/04 12:12:51 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*ft_little_sort(t_list *liste)
{
	if (ft_count_size(liste->firstA) == 1)
		return (liste);
	else if (ft_count_size(liste->firstA) == 2)
	{
		if (liste->firstA->nombre > liste->firstA->next->nombre)
			ft_rotate_a(liste);
		return (liste);
	}
	else if (ft_count_size(liste->firstA) == 3)
		ft_sort_three(liste);
	else
		ft_sort_five(liste);
	return (liste);
}

// manque 3, 2, 1 et 2, 1, 3
t_list	*ft_sort_three(t_list *liste)
{
	elem_list *first;
	elem_list *last;
	elem_list *middle;

	first = liste->firstA;
	middle = first->next;
	last = middle->next;
	if (ft_is_max(first->nombre, first) && ft_is_min(middle->nombre, first)) // 3, 1, 2
		ft_rotate_a(liste);
	if (ft_is_max(middle->nombre, first) && ft_is_min(last->nombre, first)) // 2, 3, 1
		ft_rotate_reverse_a(liste);
	if (ft_is_max(middle->nombre, first) && ft_is_min(first->nombre, first)) // 1, 3, 2
	{
		ft_push_b(liste);
		ft_rotate_a(liste);
		ft_push_a(liste);
	}
	if (ft_is_max(first->nombre, first) && ft_is_min(last->nombre, first)) //3, 2, 1
	{
		ft_swap_a(liste);
		ft_rotate_a(liste);
	}
	return (liste);
}

t_list	*ft_sort_five(t_list *liste)
{
	return (liste);
}