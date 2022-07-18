/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_reverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 11:39:09 by gbertin           #+#    #+#             */
/*   Updated: 2022/07/18 14:37:46 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_elem_list	*ft_isbefore_last(t_elem_list *liste)
{
	t_elem_list	*elem_next;

	if (!liste)
		return (NULL);
	while (liste)
	{
		elem_next = liste->next;
		if (elem_next->next == NULL)
			return (liste);
		liste = liste->next;
	}
	return (liste);
}

void	ft_rotate_reverse_a(t_list *liste)
{
	t_elem_list	*elem_first_a;
	t_elem_list	*elem_last_a;
	t_elem_list	*elem_before_last;

	elem_first_a = liste->first_a;
	elem_last_a = ft_islast(liste->first_a);
	elem_before_last = ft_isbefore_last(liste->first_a);
	if (elem_first_a->next)
	{
		liste->first_a = elem_last_a;
		elem_last_a->next = elem_first_a;
		elem_before_last->next = NULL;
	}
	ft_putstr_fd("rra\n", 1);
}

void	ft_rotate_reverse_b(t_list *liste)
{
	t_elem_list	*elem_first_b;
	t_elem_list	*elem_last_b;
	t_elem_list	*elem_before_last;

	elem_first_b = liste->first_b;
	elem_last_b = ft_islast(liste->first_b);
	elem_before_last = ft_isbefore_last(liste->first_b);
	if (elem_first_b->next)
	{
		liste->first_b = elem_last_b;
		elem_last_b->next = elem_first_b;
		elem_before_last->next = NULL;
	}
	ft_putstr_fd("rrb\n", 1);
}

void	ft_rotate_reverse_ab(t_list *liste)
{
	ft_rotate_reverse_a(liste);
	ft_rotate_reverse_b(liste);
}
