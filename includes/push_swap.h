/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 11:04:29 by gbertin           #+#    #+#             */
/*   Updated: 2022/08/02 09:25:06 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include "../libft/libft.h"

typedef struct t_elem_list
{
	int					nombre;
	int					index;
	struct t_elem_list	*next;
}			t_elem_list;

typedef struct t_list
{
	struct t_elem_list	*first_a;
	struct t_elem_list	*first_b;
}				t_list;

t_list		*ft_initlst(int nvNombre);
void		ft_printlst(t_list *liste);
t_elem_list	*ft_islast(t_elem_list *lst);
int			ft_addstart(t_list *liste, int nvNombre, char pile);
int			ft_addend(t_list *liste, int nvNombre, char pile);

t_list		*ft_fill_lst(int argc, char **argv);
t_list		*ft_fill_by_split(t_list *liste, char **split, int init);
t_list		*ft_fill(char **argv);

t_list		*ft_sort(t_list *liste);
int			ft_is_sorted(t_list *liste);
int			ft_count_size(t_elem_list *elem);
int			ft_is_max(int value, t_elem_list *liste);
int			ft_is_min(int value, t_elem_list *liste);
int			ft_search_min(t_elem_list *liste);
int			ft_max_int(t_elem_list *elem);
void		ft_big_sort(t_list *liste);
int			ft_find_max_bits(int max_num);
void		ft_push_all_b(t_list *liste);

t_list		*ft_little_sort(t_list *liste);
t_list		*ft_sort_five(t_list *liste);
t_list		*ft_sort_three(t_list *liste);

void		ft_create_index(t_list *liste);
void		ft_add_index(int index, t_list *liste);
int			ft_search_undefine_index(t_elem_list *elem);
int			ft_check_double(t_list *liste);

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

void		ft_free_struct(t_list *liste);
void		ft_free_elem(t_elem_list *elem);
void		ft_free_split(char **split);
void		ft_free_during_filling(t_list *liste);

t_list		*ft_msg_err_fill_by_split(char **split);
t_list		*ft_msg_err_during_filling_by_split(char **split, t_list *liste);
int			ft_check_max_int(char *nbr);
int			ft_check_int(int i, char *nbr, char *max);

#endif