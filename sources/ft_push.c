/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 10:57:08 by gbertin           #+#    #+#             */
/*   Updated: 2022/06/04 12:26:53 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push_a(t_list *liste)
{
	elem_list	*elem_firstB;
	elem_list	*elem_firstA;

	elem_firstA = liste->firstA;
	elem_firstB = liste->firstB;
	if (elem_firstB)
	{
		liste->firstA = elem_firstB;
		if (elem_firstB->next)
			liste->firstB = elem_firstB->next;
		else
			liste->firstB = NULL;
		elem_firstB->next = elem_firstA;
	}
	ft_putstr_fd("pa\n", 1);
}

void	ft_push_b(t_list *liste)
{
	elem_list	*elem_firstB;
	elem_list	*elem_firstA;

	elem_firstA = liste->firstA;
	elem_firstB = liste->firstB;
	if (elem_firstA)
	{
		liste->firstB = elem_firstA;
		if (elem_firstA->next)
			liste->firstA = elem_firstA->next;
		else
			liste->firstA = NULL;
		elem_firstA->next = elem_firstB;
	}
	ft_putstr_fd("pb\n", 1);
}