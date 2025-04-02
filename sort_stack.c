/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noeliasanchezfacila <noeliasanchezfacil    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 17:30:49 by noelsanc          #+#    #+#             */
/*   Updated: 2025/04/02 23:01:19 by noeliasanch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max_value(t_list **stack)
{
	t_list	*aux;
	int		max;

	if (*stack == NULL)
		return (INT_MIN);
	aux = *stack;
	max = aux->value;
	while (aux != NULL)
	{
		if (aux->value > max)
			max = aux->value; // esta comparando el primero con el resto,
		aux = aux->next;
	}
	return (max);
}

int	ft_check_sorted(t_list *stack)
{
	while (stack != NULL && stack->next != NULL)
	{
		if (stack->value > stack->next->value)
			return (0);
		else
			stack = stack->next;
	}
	return (1);
}

/*
void	sort_two(t_list **a)
{
	//if (ft_lstsize(*a) != 2)
		//return ;
	if (ft_lstsize(*a) == 2)
	{
		if (!ft_check_sorted(*a))
			swap(a);
		return ;
	}
}*/
/* chequea el orden cuando tenemos 3 valores en la stack,
	primero verifica que no sea mneos de 3
Si hay 3 valores , verifica que no este ordenado,
si no esta ordenado, verifica donde esta el valor maximo,
	si es en primera posicion rotate, si es en segunda posicion reverse rotate
si no esta ordenado al bajar el max en ultima posicion hacer solo swap para ordenar*/
void	tiny_sort(t_list **a)
{
	int	max;

	//if (ft_lstsize(*a) != 3)
		//return ;
	max = ft_max_value(a);
	
	if ((*a)->value == max)
				rotate(a);
	else if ((*a)->next->value == max)
		reverse_rotate(a);
	
	if (!ft_check_sorted(*a))
		swap(a);
}
