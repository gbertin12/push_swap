/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:09:45 by gbertin           #+#    #+#             */
/*   Updated: 2022/07/21 10:41:29 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_is_max(int value, t_elem_list *liste)
{
	while (liste)
	{
		if (liste->nombre > value)
			return (0);
		liste = liste->next;
	}
	return (1);
}

int	ft_is_min(int value, t_elem_list *liste)
{
	t_elem_list	*elem;

	elem = liste;
	while (elem)
	{
		if (elem->nombre < value)
			return (0);
		elem = elem->next;
	}
	return (1);
}

int	ft_search_min(t_elem_list *liste)
{
	int			place;
	t_elem_list	*first;

	place = 0;
	first = liste;
	while (liste)
	{
		if (ft_is_min(liste->nombre, first))
			return (place);
		place++;
		liste = liste->next;
	}
	return (place);
}

int	ft_max_int(t_elem_list *elem)
{
	int	max;

	max = 0;
	while (elem)
	{
		if (elem->nombre > max)
			max = elem->nombre;
		elem = elem->next;
	}
	return (max);
}

int	ft_check_double(t_list *liste)
{
	t_elem_list	*elem;
	t_elem_list	*check_elem;

	elem = liste->first_a;
	while (elem)
	{
		check_elem = liste->first_a;
		while (check_elem)
		{
			if (elem->nombre == check_elem->nombre
				&& elem->index != check_elem->index)
				return (1);
			check_elem = check_elem->next;
		}
		elem = elem->next;
	}
	return (0);
}
