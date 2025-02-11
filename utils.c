/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:44:41 by noelsanc          #+#    #+#             */
/*   Updated: 2025/02/11 20:27:12 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigitp(char c) // verificamos si un caracter es numerico
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
int	is_number(char *str) // verificamos si la str es de numeros , pasamos caracter a num en el bucle y check de int max y min
{
	int i;
	long long num;
	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str)
		return (0);
	while (str[i])
	{
		if (!ft_isdigitp(str[i]))
			return (0);
		num = num * 10 + (str[i] - '0');
		if ((num > INT_MAX) || (num < INT_MIN))
			return (0);
		i++;
	}
	return (1);
}
/*Verificamos si hay char duplicados ("123"). pasamos un puntero de una str y devolvemos 1 o 0 dependiendo si el char esta duplicado
Creamos 2 iteradores para comprobar el primer caracter i = 0, con el resto de caracter de la str desde j = 1
Si encuentra coincidencia devuelve 0, si no la encuentra devuelve 1, j debe iniciarse en i + 1 para que se posicione siempre en uno mas que donde se encuentra la i*/

int	is_duplicate(char *split)
{
	int	i;
	int	j;

	i = 0;
	while (split[i])
	{
		j = i + 1;
		while(split[j])
		{
			if(split[i] == split[j])
				return(1);
			j++;
		}
		i++;
	}
	return(0);
}
/*void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!new)
		return ;
	if (*lst == NULL)
		(*lst) = new;
	else
	{
		aux = *lst;
		while (aux->next)
			aux = aux->next;
		aux->next = new;
		new->next = NULL;
	}
}
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}*/

/*Para crear nuevo nodo, estableciendo contenido dentro
Creamos variable nodo, reservando memoria con malloc
Establecemos contenido value, pos e index dentro del nodo y devolvemos*/
t_list	*ft_listnew(int value)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->value = value;
	new->pos = 0;
	new->index = 0;
	new->next = NULL;
	return (new);
}
int	ft_lstsize(t_list *lst)
{
	int count;
	while(lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return(count);
}
void	print_list(t_list **lst, char list_name)
{
	if (!lst)
		return ;
	t_list *aux;
	aux = *lst;
	printf("%c\n", list_name); // imprimir el nombre de la lista,para identificar que lista se esta imprimiendo
	while (aux)
	{
		printf("Value[%i]  Position[%i]  Index[%i]\n", aux->value, aux->pos,
			aux->index);
		aux = aux->next;
	}
}