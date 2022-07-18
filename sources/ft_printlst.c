/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 16:43:42 by gbertin           #+#    #+#             */
/*   Updated: 2022/07/18 14:21:59 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_printlst(t_list *liste)
{
	t_elem_list *lst;

	if (liste)
	{
		lst = liste->first_a;
		printf("\nliste A : ");
		while (lst)
		{
			printf("%d ", lst->nombre);
			lst = lst->next;
		}
		lst = liste->first_b;
		printf("\nliste B : ");
		while (lst)
		{
			printf("%d ", lst->nombre);
			lst = lst->next;
		}
	}	
}