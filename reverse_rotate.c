/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:35:14 by noelsanc          #+#    #+#             */
/*   Updated: 2025/01/17 17:42:20 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Recibe la lista. Encuentra el último elemento (last)
Encuentra el anteúltimo elemento de la lista
Coloca primero el último elemento de la lista*/

void	reverse_rotate(t_list **stack)
{
	t_list	*first;
	t_list	*prev;
	t_list	*last;

	if (*stack == NULL || stack == NULL)
		return ;
	first = *stack;
	last = ft_lstlast(*stack);
	prev = *stack;
	while (prev->next != last)
		prev = prev->next;
	*stack = last;
	prev->next = NULL;
	last->next = first;
}
/*Aplica la funcion reverse rotate al stack a
imprime en pantalla "rra"*/

void	rra(t_list **stack)
{
	if(*stack == NULL || stack == NULL)
		return ;
	reverse_rotate(stack);
	write(1, "rra\n", 1);
}
/*Aplica la funcion reverse rotate al stack
imprime en pantalla "rrb"*/

void	rrb(t_list **stack)
{
	if(*stack == NULL || stack == NULL)
		return ;
	reverse_rotate(stack);
	write(1, "rrb\n", 1);
}
/*Aplica la funcion reverse rotate a stack_a y stack_b
imprime "rrr"*/

void rrr(t_list **a, t_list **b)
{
	if(*a == NULL || a == NULL)
		return ;
	if(*b == NULL || b == NULL)
		return ;
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 1);
}
