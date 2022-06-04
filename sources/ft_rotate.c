/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 11:16:27 by gbertin           #+#    #+#             */
/*   Updated: 2022/06/04 12:41:49 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rotate_a(t_list *liste)
{
	elem_list	*elem_firstA;
	elem_list	*elem_lastA;

	elem_firstA = liste->firstA;
	elem_lastA = ft_islast(liste->firstA);
	if (elem_firstA->next)
	{
		liste->firstA = elem_firstA->next;
		elem_lastA->next = elem_firstA;
		elem_firstA->next = NULL;
	}
	ft_putstr_fd("ra\n", 1);
}

void	ft_rotate_b(t_list *liste)
{
	elem_list	*elem_firstB;
	elem_list	*elem_lastB;

	elem_firstB = liste->firstB;
	elem_lastB = ft_islast(liste->firstB);
	if (elem_firstB->next)
	{
		liste->firstB = elem_firstB->next;
		elem_lastB->next = elem_firstB;
		elem_firstB->next = NULL;
	}
	ft_putstr_fd("rb\n", 1);
}

void	ft_rotate_ab(t_list *liste)
{
	ft_rotate_a(liste);
	ft_rotate_b(liste);
}