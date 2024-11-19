/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:46:15 by noelsanc          #+#    #+#             */
/*   Updated: 2024/11/19 16:40:29 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void rotate(t_list **stack)
{
	if (*stack == NULL || stack == NULL)
		return ;
		
	t_list *first;
	t_list *second;
	t_list *last;

	first = *stack;
	second = (*stack)->next;
	last = *stack;

	while(last->next)
		last = last->next;
	
	first->next = NULL;
	*stack = second;
	last->next = first;
}
//creo tres variables tipo t_list que funciones como auxiliares y les doy una posicion dentro de la lista, para que guarde, primera posicion, segunda y ultima
// para posicionar last, hago un bucle que recorra todos los nodos hasta el final
// cambio los punteros ayudandome de los auxiliares, ahora el puntero de primer nodo apunta a null (ya que pasa a ser ultimo), el head de la lista apuntara ahora a second y last apunta a first(ya uqe movimos first a final de la lista)

void ra(t_list **stack)
{
	if(*stack == NULL || stack == NULL)
		return ;
	rotate(stack);
	write(1,"ra\n", 4);
}
void rb(t_list **stack)
{
	if(*stack == NULL || stack == NULL)
		return ;
	rotate(stack);
	write(1, "rb\n", 1);
}
void rr(t_list *stack_a, t_list *stack_b)
{
	if(*stack_a == NULL || stack_a == NULL)
		return ;
	if(*stack_b == NULL || stack_b == NULL)
		return ;
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 1);
}