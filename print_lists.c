/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lists.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 21:42:13 by noelsanc          #+#    #+#             */
/*   Updated: 2024/11/05 18:43:28 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list **lst, char list_name)
{
	if(!lst)
		return ;
	t_list *aux;
	aux = *lst;
	printf("%c\n", list_name);// imprimir el nombre de la lista, para identificar que lista se esta imprimiendo
	while(aux)
	{
		printf("Value[%i]  Position[%i]  Index[%i]\n", aux->value, aux->pos, aux->index);
		aux = aux->next;
	}
}
/* int main()
{
	t_list *lista;
	lista = (t_list *)malloc(sizeof(t_list));//tengo que inicializar lista y para eso malloc y voy añadiendo cada contenido del nodo , ultimo siempre apunta a NULL;
	if(!lista)
		return(0);
	lista->value = 1;
	lista->pos = 1;
	lista->ejemplo = "hey";
	lista->doble = 2;
	lista->next = NULL;
	print_list(&lista, 'a');//aqui le paso & porque es doble puntero a lista , para subirlo a doble puntero ya que lista es solo *
	free(lista);
	return(0);
} */