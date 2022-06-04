/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 12:01:04 by gbertin           #+#    #+#             */
/*   Updated: 2022/06/04 12:44:31 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    ft_free_struct(t_list *liste)
{
    elem_list   *temp;
    elem_list   *v;

    v = ft_memset(&v, 0, sizeof(elem_list));
    temp = liste->firstA;
    while (temp)
    {
        v = temp;
        printf("v : %d\n temp : %d \n", v->nombre, temp->nombre);
        free(v);
        temp = temp->next;
    }
}