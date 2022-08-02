/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:36:45 by gbertin           #+#    #+#             */
/*   Updated: 2022/07/21 10:40:10 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_create_index(t_list *liste)
{
	int	size_lst;
	int	i;

	i = 0;
	size_lst = ft_count_size(liste->first_a);
	while (i++ < size_lst)
		ft_add_index(i, liste);
}

void	ft_add_index(int index, t_list *liste)
{
	int				min;
	t_elem_list		*elem;

	elem = liste->first_a;
	min = ft_search_undefine_index(liste->first_a);
	while (elem)
	{
		if (elem->nombre < min && elem->index == 0)
			min = elem->nombre;
		elem = elem->next;
	}
	elem = liste->first_a;
	while (elem)
	{
		if (elem->nombre == min)
		{
			elem->index = index;
			break ;
		}
		elem = elem->next;
	}
}

int	ft_search_undefine_index(t_elem_list *elem)
{
	while (elem)
	{
		if (elem->index == 0)
			return (elem->nombre);
		elem = elem->next;
	}
	return (0);
}
