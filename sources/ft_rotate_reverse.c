/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_reverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 11:39:09 by gbertin           #+#    #+#             */
/*   Updated: 2021/12/24 14:18:30 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

elem_list	*ft_isbefore_last(elem_list *liste)
{
	elem_list *elem_next;

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
	elem_list	*elem_firstA;
	elem_list	*elem_lastA;
	elem_list	*elem_before_last;

	elem_firstA = liste->firstA;
	elem_lastA = ft_islast(liste->firstA);
	elem_before_last = ft_isbefore_last(liste->firstA);
	if (elem_firstA->next)
	{
		liste->firstA = elem_lastA;
		elem_lastA->next = elem_firstA;
		elem_before_last->next = NULL;
	}
}

void	ft_rotate_reverse_b(t_list *liste)
{
	elem_list	*elem_firstB;
	elem_list	*elem_lastB;
	elem_list	*elem_before_last;

	elem_firstB = liste->firstB;
	elem_lastB = ft_islast(liste->firstB);
	elem_before_last = ft_isbefore_last(liste->firstB);
	if (elem_firstB->next)
	{
		liste->firstB = elem_lastB;
		elem_lastB->next = elem_firstB;
		elem_before_last->next = NULL;
	}
}

void	ft_rotate_reverse_ab(t_list *liste)
{
	ft_rotate_reverse_a(liste);
	ft_rotate_reverse_b(liste);
}