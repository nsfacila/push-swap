/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 17:30:49 by noelsanc          #+#    #+#             */
/*   Updated: 2025/02/05 18:56:13 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.c"

int	ft_max_value(t_list **stack)
{
	t_list	*aux;
	int max;

	if (*stack == NULL)
		return (NULL);
	aux = *stack;
	max = aux-> value;
	
	while(aux != NULL)
	{
		if(max > aux->next->value)
	}
	
	return(max);
}

int	ft_check_sorted(t_list *stack)
{
	while (stack != NULL)
	{
		if (stack->value > stack->next->value)
			return (0);
		else
			stack = stack->next;
	}
	return (1);
}

void	sort_two(t_list *a)
{
	if (ft_lstsize(a) == 1)
		return ;
	else if (ft_lstsize(a) == 2)
	{
		if (!ft_check_sorted(a))
			swap(&a);
		return ;
	}
}
void	sort_three(t_list *a)
{
	int max = ft_max(a);
	if (ft_lstsize(a) < 3)
		return ;
	else if (ft_lstsize(a) == 3)
	{
		if (!ft_check_sorted(a))
		{
			if (a->value = max)
				rotate(&a);
			else if (a->next->value = max)
				reverse_rotate(&a);
		}
		if (!ft_check_sorted(a))
			swap(&a);
	}
}