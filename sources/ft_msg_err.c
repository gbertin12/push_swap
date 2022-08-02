/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_msg_err.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 08:12:46 by gbertin           #+#    #+#             */
/*   Updated: 2022/08/02 15:03:57 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*ft_msg_err_fill_by_split(char **split)
{
	write(STDERR_FILENO, "Error\n", 6);
	ft_free_split(split);
	return (NULL);
}

t_list	*ft_msg_err_during_filling_by_split(char **split, t_list *liste)
{
	write(STDERR_FILENO, "Error\n", 6);
	ft_free_split(split);
	ft_free_during_filling(liste);
	return (NULL);
}

t_list	*ft_err_split_zero(int i, char **split, int argc, t_list *liste)
{
	if (i >= 2)
		ft_free_struct(liste);
	if (split[0] == NULL && argc == 2)
	{
		ft_free_split(split);
		return (NULL);
	}
	return (ft_msg_err_fill_by_split(split));
}
