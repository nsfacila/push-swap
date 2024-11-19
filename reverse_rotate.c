/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:35:14 by noelsanc          #+#    #+#             */
/*   Updated: 2024/11/19 17:55:00 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
void	rra(t_list **stack)
{
	if(*stack == NULL || stack == NULL)
		return ;
	reverse_rotate(stack);
	write(1, "rra\n", 1);
}
void	rrb(t_list **stack)
{
	if(*stack == NULL || stack == NULL)
		return ;
	reverse_rotate(stack);
	write(1, "rrb\n", 1);
}
void rrr(t_list *stack_a, t_list *stack_b)
{
	if(*stack_a == NULL || stack_a == NULL)
		return ;
	if(*stack_b == NULL || stack_b == NULL)
		return ;
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write(1, "rrr\n", 1);
}
