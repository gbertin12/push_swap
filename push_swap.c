/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 11:23:17 by gbertin           #+#    #+#             */
/*   Updated: 2022/07/18 16:21:56 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

// verifier si il y a plus d'un nombre
int	main(int argc, char **argv)
{
	t_list	*liste;

	if (argc < 2)
		return (0);
	liste = ft_fill_lst(argc, argv);
	if (ft_is_sorted(liste))
		ft_free_struct(liste);
	else if (liste != NULL)
	{
		if (ft_count_size(liste->first_a) <= 5)
			ft_little_sort(liste); 
		else
			liste = ft_sort(liste);
		ft_free_struct(liste);
	}
	return (0);
}