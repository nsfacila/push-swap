/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 21:20:37 by noelsanc          #+#    #+#             */
/*   Updated: 2024/11/19 17:47:27 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				value;
	int				pos;
	int				index;
	struct s_list	*next;
}					t_list;
// UTILS
int					ft_lstsize(t_list *lst);
t_list				*ft_lstnew(int value);
void				ft_lstadd_back(t_list **lst, t_list *new);
t_list				*ft_lstlast(t_list *lst);
int					ft_atoi(const char *str);
// prints (borrar antes de entregar!)
void				print_list(t_list **lst, char list);

// MOVEMENTS
void				swap(t_list **stack);
//void				reverse_rotate(t_list **stack);
//static void			rotate(t_list **stack);

void				ra(t_list **stack);
void				rb(t_list **stack);
void				rr(t_list *stack_a, t_list *stack_b);

void				reverse_rotate(t_list **stack);
void				push(t_list **a, t_list **b);

#endif