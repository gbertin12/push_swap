/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:09:45 by gbertin           #+#    #+#             */
/*   Updated: 2022/04/14 15:19:18 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.c"

int ft_is_max(int value, elem_list *liste)
{
    while (liste)
    {
        if (liste->nombre > value)
            return (0);
        liste = liste->next;
    }
    return (1);
}

int ft_is_min(int value, elem_list *liste)
{
    while (liste)
    {
        if (liste->nombre < value)
            return (0);
        liste = liste->next;
    }
    return (1);
}
