/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_and_supp.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 14:45:26 by gbertin           #+#    #+#             */
/*   Updated: 2022/07/20 15:05:41 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_elem_list	*ft_islast(t_elem_list *lst)
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

int	ft_addstart(t_list *liste, int nvNombre, char pile)
{
	t_elem_list	*nv_element;

	nv_element = malloc(sizeof(t_elem_list));
	if (!nv_element)
		return (0);
	nv_element->nombre = nvNombre;
	nv_element->index = 0;
	nv_element->next = NULL;
	if (pile == 'A')
	{
		nv_element->next = liste->first_a;
		liste->first_a = nv_element;
	}
	if (pile == 'B')
	{
		nv_element->next = liste->first_b;
		liste->first_b = nv_element;
	}
	return (1);
}

int	ft_addend(t_list *liste, int nvNombre, char pile)
{
	t_elem_list	*nv_element;
	t_elem_list	*last_element;

	nv_element = malloc(sizeof(t_elem_list));
	if (!nv_element)
		return (0);
	nv_element->nombre = nvNombre;
	nv_element->index = 0;
	nv_element->next = NULL;
	if (pile == 'A')
	{
		last_element = ft_islast(liste->first_a);
		last_element->next = nv_element;
	}
	if (pile == 'B')
	{
		last_element = ft_islast(liste->first_b);
		last_element->next = nv_element;
	}
	return (1);
}
