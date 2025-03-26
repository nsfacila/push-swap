/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 21:20:37 by noelsanc          #+#    #+#             */
/*   Updated: 2025/03/26 20:41:02 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

/* typedef struct p_list
{
	int				value;
	int				pos;
	int				index;
	struct p_list	*next;
}					t_list; */
// UTILS
int					ft_lstsize(t_list *lst);
t_list				*ft_listnew(int value);

int					ft_atoi(const char *str);
int					is_number(char *str);
int					is_duplicate(char **split);
void				free_split(char **split);
// prints (borrar antes de entregar!)
void				print_list(t_list **lst, char list);
int 				ft_strcmp(const char *s1, const char *s2);

// INIT
void				set_index(t_list **a);
void 				ft_the_real_set_index(int *tab, t_list **a, int size);
void				ft_set_position(t_list **lst);
int					*sort_int_tab(int *tab, int size);
int					check_error(int argc, char **argv);
char				*join_arg(int argc, char **argv);
int					ft_checkarguments(char **argv);
int					get_value_at_position(t_list *stack, int pos);

// MOVEMENTS
void				swap(t_list **stack);
void				sa(t_list **stack);
void				sb(t_list **stack);
void				ss(t_list **a, t_list **b);

void				rotate(t_list **stack);
void				ra(t_list **stack);
void				rb(t_list **stack);
void				rr(t_list **stack_a, t_list **stack_b);

void				reverse_rotate(t_list **stack);
void				rra(t_list **stack);
void				rrb(t_list **stack);
void				rrr(t_list **a, t_list **b);

void				push_a(t_list **a, t_list **b);
void				push_b(t_list **a, t_list **b);
void				pa(t_list **a, t_list **b);
void				pb(t_list **a, t_list **b);

int					ft_max_value(t_list **stack);
int					ft_check_sorted(t_list *stack);
void				sort_two(t_list **a);
void				sort_three(t_list **a);
void 				push_swap(t_list **a, t_list **b);
int 				get_min_pos(t_list **a);
void 				print_split(char **split);
int					calculate_cost_to_top(t_list *stack, int pos);
int					find_insert_position(t_list *a, int value);
int					calculate_total_cost(t_list *a, t_list *b, int b_pos);
int					find_min_cost_position(t_list *a, t_list *b);
void				move_to_top(t_list **stack, int pos, char stack_name);
#endif