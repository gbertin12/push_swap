/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 11:16:27 by gbertin           #+#    #+#             */
/*   Updated: 2022/07/18 14:37:32 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rotate_a(t_list *liste)
{
	t_elem_list	*elem_first_a;
	t_elem_list	*elem_last_a;

	elem_first_a = liste->first_a;
	elem_last_a = ft_islast(liste->first_a);
	if (elem_first_a->next)
	{
		liste->first_a = elem_first_a->next;
		elem_last_a->next = elem_first_a;
		elem_first_a->next = NULL;
	}
	ft_putstr_fd("ra\n", 1);
}

void	ft_rotate_b(t_list *liste)
{
	t_elem_list	*elem_first_b;
	t_elem_list	*elem_last_b;

	elem_first_b = liste->first_b;
	elem_last_b = ft_islast(liste->first_b);
	if (elem_first_b->next)
	{
		liste->first_b = elem_first_b->next;
		elem_last_b->next = elem_first_b;
		elem_first_b->next = NULL;
	}
	ft_putstr_fd("rb\n", 1);
}

void	ft_rotate_ab(t_list *liste)
{
	ft_rotate_a(liste);
	ft_rotate_b(liste);
}
