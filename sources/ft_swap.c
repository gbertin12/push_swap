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
	elem_list	*elem_first;
	elem_list	*elem_second;

	elem_first = liste->firstA;
	elem_second = elem_first->next;
	if (elem_first && elem_second)
	{
		liste->firstA = elem_second;
		elem_first->next = elem_second->next;
		elem_second->next = elem_first;
	}
}

void	ft_swap_b(t_list *liste)
{
	elem_list	*elem_first;
	elem_list	*elem_second;

	elem_first = liste->firstB;
	elem_second = elem_first->next;
	if (elem_first && elem_second)
	{
		liste->firstB = elem_second;
		elem_first->next = elem_second->next;
		elem_second->next = elem_first;
	}
}

void	ft_swap_ab(t_list *liste)
{
	ft_swap_a(liste);
	ft_swap_b(liste);
}