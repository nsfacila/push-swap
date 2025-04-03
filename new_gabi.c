/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_gabi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 21:09:14 by noelsanc          #+#    #+#             */
/*   Updated: 2025/04/03 22:25:31 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	findcost_a(t_list **a)
{
	int		size;
	t_list	*aux;

	size = ft_lstsize(*a);
	aux = *a;
	while (aux)
	{
		if (aux->pos <= size / 2)
			aux->costa = aux->pos;
		else
			aux->costa = (aux->pos - size);
		aux = aux->next;
	}
}
int	findcost_b(t_list **a, t_list **b)
{
	t_list	*aux_a;
	
	aux_a = *a;
	while (aux_a)
	{
		if (aux_a->value > ft_max_value(*b))
			aux_a->costb = get_max_pos(*b); // hay que hacerlo
		if else(aux_a->value < ft_min_value(*b))
				// hay que hacerlo a partir de ft_max value
				aux_a->costb = get_min_pos(*b);
		else
			find_target(aux_a, *b);
		aux_a = aux_a->next;
	}
}

void	find_target(t_list *a, t_list *b)
{
	int dif;

	dif = INT_MAX;

	while (*b)
	{
		if ((a->value - b->value) < dif && dif > 0)
		{
			dif = a->value - b->value;
			a->target = b->pos;
		}
		b = b->next;
	}
}