/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initlst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 14:32:27 by gbertin           #+#    #+#             */
/*   Updated: 2022/08/02 09:40:10 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*ft_initlst(int nvNombre)
{
	t_list		*liste;
	t_elem_list	*element_a;

	liste = malloc(sizeof(*liste));
	if (!liste)
		return (0);
	element_a = malloc(sizeof(*element_a));
	if (!element_a)
		return (0);
	ft_memset(liste, 0, sizeof(t_list));
	ft_memset(liste, 0, sizeof(t_elem_list));
	element_a->nombre = nvNombre;
	element_a->index = 0;
	element_a->next = NULL;
	liste->first_a = element_a;
	liste->first_b = NULL;
	return (liste);
}
