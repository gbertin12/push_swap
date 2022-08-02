/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 12:01:04 by gbertin           #+#    #+#             */
/*   Updated: 2022/07/21 11:09:00 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_free_struct(t_list *liste)
{
	if (liste->first_a)
		ft_free_elem(liste->first_a);
	if (liste->first_b)
		ft_free_elem(liste->first_b);
	if (liste)
		free(liste);
}

void	ft_free_elem(t_elem_list *elem)
{
	t_elem_list	*temp;

	while (elem)
	{
		temp = elem;
		elem = elem->next;
		free(temp);
	}
}

void	ft_free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

void	ft_free_during_filling(t_list *liste)
{
	ft_free_elem(liste->first_a);
	free(liste);
}
