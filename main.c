/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 11:23:17 by gbertin           #+#    #+#             */
/*   Updated: 2022/01/30 22:55:02 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

// verifier si il y a plus d'un nombre
int main(int argc, char **argv)
{
	t_list *liste;
	
	if (argc < 2)
		return (0);
	liste = ft_fill_lst(argc, argv);
	if (liste == NULL)
	{
		// check leaks
		return (0);
	}
	if (ft_count_size(liste->firstA) <= 5)
	{
		ft_little_sort(liste);
	}
		
	else
		liste = ft_sort(liste);
	//free
	ft_printlst(liste);
	return (0);
}