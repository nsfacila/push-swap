/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noeliasanchezfacila <noeliasanchezfacil    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:04:01 by noelsanc          #+#    #+#             */
/*   Updated: 2025/03/16 15:40:08 by noeliasanch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	push_a(t_list **a, t_list **b)
{
	t_list *aux_a;
	t_list *aux_b;
	
	if(!b || !(*b))
		return ;
		
	aux_a = *a;
	aux_b = *b;

	*a = aux_b;
	*b = (*b)->next;
	aux_b->next = aux_a;
}
void	push_b(t_list **a, t_list **b)
{
	t_list	*aux_a;
	t_list	*aux_b;
	
	if(!a || !(*a))
		return ;

	aux_a = *a;
	aux_b = *b;

	*b = aux_a;
	*a = (*a)->next;
	aux_a->next = aux_b;
}

void	pa(t_list **a, t_list **b)
{
	if(*a == NULL || *b == NULL)
		return;
	push_a(a, b);
	write(1, "pa\n", 1);
}
void	pb(t_list **a, t_list **b)
{
	if(*a == NULL || *b == NULL)
		return;
	push_b(a, b);
	write(1, "pb\n", 1);
}
