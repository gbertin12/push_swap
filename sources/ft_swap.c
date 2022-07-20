/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                 			:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 10:14:19 by gbertin           #+#    #+#             */
/*   Updated: 2021/12/24 10:50:04 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_swap_a(t_list *liste)
{
	t_elem_list	*elem_first;
	t_elem_list	*elem_second;

	elem_first = liste->first_a;
	elem_second = elem_first->next;
	if (elem_first && elem_second)
	{
		liste->first_a = elem_second;
		elem_first->next = elem_second->next;
		elem_second->next = elem_first;
	}
	ft_putstr_fd("sa\n", 1);
}

void	ft_swap_b(t_list *liste)
{
	t_elem_list	*elem_first;
	t_elem_list	*elem_second;

	elem_first = liste->first_b;
	elem_second = elem_first->next;
	if (elem_first && elem_second)
	{
		liste->first_b = elem_second;
		elem_first->next = elem_second->next;
		elem_second->next = elem_first;
	}
	ft_putstr_fd("sb\n", 1);
}

void	ft_swap_ab(t_list *liste)
{
	ft_swap_a(liste);
	ft_swap_b(liste);
}
