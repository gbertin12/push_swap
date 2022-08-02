/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 10:57:08 by gbertin           #+#    #+#             */
/*   Updated: 2022/07/18 14:30:08 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push_a(t_list *liste)
{
	t_elem_list	*elem_first_b;
	t_elem_list	*elem_first_a;

	elem_first_a = liste->first_a;
	elem_first_b = liste->first_b;
	if (elem_first_b)
	{
		liste->first_a = elem_first_b;
		if (elem_first_b->next)
			liste->first_b = elem_first_b->next;
		else
			liste->first_b = NULL;
		elem_first_b->next = elem_first_a;
	}
	ft_putstr_fd("pa\n", 1);
}

void	ft_push_b(t_list *liste)
{
	t_elem_list	*elem_first_b;
	t_elem_list	*elem_first_a;

	elem_first_a = liste->first_a;
	elem_first_b = liste->first_b;
	if (elem_first_a)
	{
		liste->first_b = elem_first_a;
		if (elem_first_a->next)
			liste->first_a = elem_first_a->next;
		else
			liste->first_a = NULL;
		elem_first_a->next = elem_first_b;
	}
	ft_putstr_fd("pb\n", 1);
}
