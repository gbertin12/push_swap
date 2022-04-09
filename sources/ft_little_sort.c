/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_little_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 21:48:40 by gbertin           #+#    #+#             */
/*   Updated: 2022/01/31 18:01:47 by gbertin          ###   ########.fr       */
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

t_list	*ft_sort_three(t_list *liste)
{
	elem_list *first;
	elem_list *last;
	elem_list *middle;

	first = liste->firstA;
	middle = first->next;
	last = middle->next;
	if ((first->nombre > middle->nombre && first->nombre > last->nombre) 
		&& middle->nombre < last->nombre)
		ft_rotate_a(liste);
	if ((middle->nombre > first->nombre && middle->nombre > last->nombre) 
		&& first->nombre > last->nombre)
		ft_rotate_reverse_a(liste);
	if ((middle->nombre > first->nombre && middle->nombre > last->nombre) 
		&& first->nombre < last->nombre)
	{
		ft_push_b(liste);
		ft_rotate_a(liste);
		ft_push_a(liste);
	}
	return (liste);
}

t_list	*ft_sort_five(t_list *liste)
{
	return (liste);
}