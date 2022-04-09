/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 16:43:42 by gbertin           #+#    #+#             */
/*   Updated: 2022/01/30 13:03:07 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_printlst(t_list *liste)
{
	elem_list *lst;

	if (liste)
	{
		lst = liste->firstA;
		printf("\nliste A : ");
		while (lst)
		{
			printf("%d ", lst->nombre);
			lst = lst->next;
		}
		lst = liste->firstB;
		printf("\nliste B : ");
		while (lst)
		{
			printf("%d ", lst->nombre);
			lst = lst->next;
		}
	}	
}