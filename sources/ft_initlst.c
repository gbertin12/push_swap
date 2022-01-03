/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initlst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 14:32:27 by gbertin           #+#    #+#             */
/*   Updated: 2021/12/24 11:05:44 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list  *ft_initlst(int nvNombre)
{
	t_list      *liste;
	elem_list   *elementA;

	liste = malloc(sizeof(*liste));
	elementA = malloc(sizeof(*elementA));
	if (!liste || !elementA)
		return (NULL);
	elementA->nombre = nvNombre;
	elementA->next = NULL;
	liste->firstA = elementA;
	liste->firstB = NULL;
	return (liste);
}