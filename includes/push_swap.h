/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 11:04:29 by gbertin           #+#    #+#             */
/*   Updated: 2021/12/24 14:22:52 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
#include <stdio.h>
#include "../libft/libft.h"

typedef struct	elem_list
{
	int					nombre;
	struct elem_list	*next;
}				elem_list;

typedef struct	t_list
{
	struct elem_list	*firstA;
	struct elem_list	*firstB;
}				t_list;

t_list		*ft_initlst(int nvNombre);
void		ft_printlst(t_list *liste);
elem_list	*ft_islast(elem_list *lst);
void		ft_addstart(t_list *liste, int nvNombre, char pile);
void		ft_addend(t_list *liste, int nvNombre, char pile);

t_list		*ft_fill_lst(char **split);
t_list		*ft_fill_lst2(char **argv);

void		ft_swap_a(t_list *liste);
void		ft_swap_b(t_list *liste);
void		ft_swap_ab(t_list *liste);
void		ft_push_a(t_list *liste);
void		ft_push_b(t_list *liste);
void		ft_rotate_a(t_list *liste);
void		ft_rotate_b(t_list *liste);
void		ft_rotate_ab(t_list *liste);
void		ft_rotate_reverse_a(t_list *liste);
void		ft_rotate_reverse_b(t_list *liste);
void		ft_rotate_reverse_ab(t_list *liste);
#endif