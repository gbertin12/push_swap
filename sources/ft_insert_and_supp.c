/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_and_supp.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 14:45:26 by gbertin           #+#    #+#             */
/*   Updated: 2021/12/23 17:36:35 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

elem_list	*ft_islast(elem_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

void	ft_addstart(t_list *liste, int nvNombre, char pile)
{
	elem_list *nvElement;

	nvElement = malloc(sizeof(*nvElement));
	nvElement->nombre = nvNombre;
	if (pile == 'A')
	{
		nvElement->next = liste->firstA;
		liste->firstA = nvElement;
	}
	if (pile == 'B')
	{
		nvElement->next = liste->firstB;
		liste->firstB = nvElement;
	}
}

void	ft_addend(t_list *liste, int nvNombre, char pile)
{
	elem_list	*nvElement;
	elem_list	*lastElement;

	nvElement = malloc(sizeof(*nvElement));
	nvElement->nombre = nvNombre;
	if (pile == 'A')
	{
		lastElement = ft_islast(liste->firstA);
		lastElement->next = nvElement;
	}
	if (pile == 'B')
	{
		lastElement = ft_islast(liste->firstB);
		lastElement->next = nvElement;
	}
}

// void	ft_suppstart(t_list *liste, char pile)
// {

// }

// void	ft_suppend(t_list *liste, char pile)
// {

// }