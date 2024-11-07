/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 21:20:37 by noelsanc          #+#    #+#             */
/*   Updated: 2024/11/07 19:34:05 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef struct	s_list
{
	int				value;
	int				pos;
	int				index;
	struct s_list 	*next;
}	t_list;
//UTILS
int		ft_lstsize(t_list *lst);
t_list	*ft_lstnew(int value);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
int		ft_atoi(const char *str);
//prints (borrar antes de entregar!)
void	print_list(t_list **lst, char list);

void swap(t_list **stack);
void rotate(t_list **stack);
#endif