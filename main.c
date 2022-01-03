/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 11:23:17 by gbertin           #+#    #+#             */
/*   Updated: 2021/12/24 14:27:33 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int main(int argc, char **argv)
{
	t_list *liste;
	
	if (argc < 2)
		return (0);
	if (argc == 2)
	{
		liste = ft_fill_lst(ft_split(argv[1], ' '));
		if (liste == NULL)
			return (0);
	}
	else 
	{
		liste = ft_fill_lst2(argv);
		if (liste == NULL)
			return (0);
	}
	ft_printlst(liste);
	return (0);
}