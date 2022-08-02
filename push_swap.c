/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 11:23:17 by gbertin           #+#    #+#             */
/*   Updated: 2022/08/02 14:55:54 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*liste;

	if (argc < 2)
		return (0);
	liste = ft_fill_lst(argc, argv);
	if (liste)
	{
		ft_create_index(liste);
		if (ft_is_sorted(liste) || ft_check_double(liste))
		{
			if (ft_check_double(liste))
				write(STDERR_FILENO, "Error\n", 6);
		}
		else
		{
			if (ft_count_size(liste->first_a) <= 5)
				ft_little_sort(liste);
			else
				ft_sort(liste);
		}
		ft_free_struct(liste);
	}
	return (0);
}
