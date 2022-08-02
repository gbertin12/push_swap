/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_little_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 21:48:40 by gbertin           #+#    #+#             */
/*   Updated: 2022/07/21 11:23:04 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*ft_little_sort(t_list *liste)
{
	if (ft_count_size(liste->first_a) == 1)
		return (liste);
	else if (ft_count_size(liste->first_a) == 2)
	{
		if (liste->first_a->nombre > liste->first_a->next->nombre)
			ft_rotate_a(liste);
		return (liste);
	}
	else if (ft_count_size(liste->first_a) == 3)
		ft_sort_three(liste);
	else
		ft_sort_five(liste);
	return (liste);
}

t_list	*ft_sort_three(t_list *liste)
{
	t_elem_list	*f;
	t_elem_list	*last;
	t_elem_list	*middle;

	f = liste->first_a;
	middle = f->next;
	last = middle->next;
	if (ft_is_max(f->nombre, f) && ft_is_min(middle->nombre, f))
		ft_rotate_a(liste);
	else if (ft_is_max(middle->nombre, f) && ft_is_min(last->nombre, f))
		ft_rotate_reverse_a(liste);
	else if (ft_is_max(middle->nombre, f) && ft_is_min(f->nombre, f))
	{
		ft_push_b(liste);
		ft_rotate_a(liste);
		ft_push_a(liste);
	}
	else if (ft_is_max(f->nombre, f) && ft_is_min(last->nombre, f))
	{
		ft_rotate_a(liste);
		ft_swap_a(liste);
	}
	else if (ft_is_max(last->nombre, f) && ft_is_min(middle->nombre, f))
		ft_swap_a(liste);
	return (liste);
}

t_list	*ft_sort_five(t_list *lst)
{
	while (!ft_is_sorted(lst))
	{
		if (ft_count_size(lst->first_a) > 3)
		{
			if (ft_is_min(lst->first_a->nombre, lst->first_a))
				ft_push_b(lst);
			if (ft_search_min(lst->first_a) > ft_count_size(lst->first_a) / 2)
				ft_rotate_reverse_a(lst);
			else
				ft_rotate_a(lst);
		}
		else
			ft_sort_three(lst);
	}
	while (lst->first_b)
		ft_push_a(lst);
	return (lst);
}
