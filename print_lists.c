/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lists.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 21:42:13 by noelsanc          #+#    #+#             */
/*   Updated: 2024/09/10 22:13:39 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swapin.h"

void	print_list(t_list **lst, char list)
{
	t_list *aux;
	aux = *lst;
	printf("%c\n", list);
	while(aux)
	{
		printf("Value[%i]  Position[%i]  Index[%i]  Ejemplo[%c]  Doble[%i]\n", aux->value, aux->pos, aux->index, aux->ejemplo, aux->doble);
		aux = aux->next;
	}
}