/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 11:04:29 by gbertin           #+#    #+#             */
/*   Updated: 2022/04/14 15:18:52 by gbertin          ###   ########.fr       */
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

t_list		*ft_fill_lst(int argc, char **argv);
t_list		*ft_fill_by_split(char **split);
t_list		*ft_fill(char **argv);

t_list		*ft_sort(t_list *liste);
int			ft_is_sorted(t_list *liste);
int			ft_count_size(elem_list *elem);
int			ft_is_max(int value, elem_list *liste);
int			ft_is_min(int value, elem_list *liste);


t_list		*ft_little_sort(t_list *liste);
t_list		*ft_sort_five(t_list *liste);
t_list		*ft_sort_three(t_list *liste);

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