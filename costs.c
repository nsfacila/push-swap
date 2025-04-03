/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   costs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 19:29:52 by noelsanc          #+#    #+#             */
/*   Updated: 2025/04/03 18:16:17 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//,Calcula el coste de mover cada variable en b a la pila de a , para ello variable que contenga tamaño de la pila y otra variable para la mitad de la pila
//Le doy el valor a cada variable, en len , almaceno el tamaño de la pila a porque voy a calcular costes de a.
//Bucle que recorre cada nodo en b, si es mas barato rotar hacia arriba, ra si es mas barato rotar hacia abajo rra. Se actualiza el puntero al siguiente nodo.
void	costb(t_list **a, t_list **b)
{
	t_list	*temp;
	int		half;
	int		len;

	temp = *b;
	len = ft_lstsize(*b); // Tamaño de la pila `a`
	half = len / 2;       // Mitad de la pila `a`
	while (temp)
	{
		if (temp->target <= half)
			temp->costb = temp->target; // Rotar hacia arriba
		else
			temp->costb = temp->target - len; // Rotar hacia abajo
		temp = temp->next;
	}
}
//el coste de a calcula el costo de mover cada elemento al top de la pila b, funcion igual que la costa solo que en este caso se compara
//posicion actual con la mitad del tamaño de la pila. mas barato rotar hacia arriba ra, rotar reverso rra
void	costa(t_list **a)
{
	t_list	*temp;
	int		half;
	int		len;

	temp = *a;
	len = ft_lstsize(*a); // Tamaño de la pila `a`
	half = len / 2;       // Mitad de la pila `a`
	while (temp)
	{
		if (temp->pos <= half)
			temp->costb = temp->pos; // Rotar hacia arriba
		else
			temp->costb = temp->pos - len; // Rotar hacia abajo
		temp = temp->next;
	}
}

void	print_costs(t_list *b)
{
	t_list *temp;

	temp = b;
	while (temp)
	{
		printf("Value: %d, Costa: %d, Costb: %d\n", temp->value, temp->costa,
			temp->costb);
		temp = temp->next;
	}
}