/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:44:41 by noelsanc          #+#    #+#             */
/*   Updated: 2025/01/21 21:18:53 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(char c) // verificamos si un caracter es numerico
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
int	is_number(char *str) // verificamos si la str es de numeros
{
	int i;
	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str)
		return (0);
	while(str[i])
	{
		if(!ft_isdigit(str[i]))
			return(0);
		i++;
	}
	return(1);
		
}
int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst->next)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*Para crear nuevo nodo, estableciendo contenido dentro
Creamos variable nodo, reservando memoria con malloc
Establecemos contenido value, pos e index dentro del nodo y devolvemos*/
t_list	*ft_lstnew(int value)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->value = value;
	new->pos = 0;
	new->index = 1;
	new->next = NULL;
	return (new);
}
/*CReamos una variable auxiliar que aunte a head
verificamos que lista no sea null, si es null añadimos new node
si no es null usamos el auxiliar para recorre lista y cuando llegue al ultimo nodo añadimos new, actualizamos el puntero de new hacia NULL*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *aux;
	if(!new)
		return;
	if (*lst == NULL)
		(*lst) = new;
	else
	{
		aux = *lst;
		while(aux->next)
			aux = aux->next;
		aux-> next = new;
		new-> next = NULL;
	}
}
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