/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:44:41 by noelsanc          #+#    #+#             */
/*   Updated: 2025/04/03 17:33:30 by noelsanc         ###   ########.fr       */
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
int	is_number(char *str)
		// verificamos si la str es de numeros ,pasamos caracter a num en el bucle y check de int max y min
{
	int i;
	long long num;
	int sign;

	sign = 1;
	i = 0;
	num = 0;

	if (!str || str[i] == '\0')
		return (0);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		if (!ft_isdigitp(str[i]))
			return (0);
		num = num * 10 + (str[i] - '0');
		if ((sign == 1 && num > INT_MAX) || (sign == -1 && -num < INT_MIN))
			return (0);
		i++;
	}
	return (1);
}
/*Verificamos si hay char duplicados ("123"). pasamos un puntero de una str y devolvemos 1 o 0 dependiendo si el char esta duplicado
Creamos 2 iteradores para comprobar el primer caracter i = 0,
	con el resto de caracter de la str desde j = 1
Si encuentra coincidencia devuelve 0, si no la encuentra devuelve 1,
	j debe iniciarse en i
	+ 1 para que se posicione siempre en uno mas que donde se encuentra la i*/

int	is_duplicate(char **split)
{
	int	i;
	int	j;

	i = 0;
	while (split[i])
	{
		j = i + 1;
		while (split[j])
		{
			if (ft_strcmp(split[i], split[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

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
	size_t	count;

	count = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
void	print_list(t_list **lst, char list_name)
{
	t_list	*aux;

	if (!lst)
		return ;
	aux = *lst;
	printf("%c\n", list_name);
	// imprimir el nombre de la lista,para identificar que lista se esta imprimiendo
	while (aux)
	{
		printf("Value[%i]  Position[%i]  Index[%i]\n", aux->value, aux->pos,
			aux->index);
		aux = aux->next;
	}
}
// obtener el valor de un nodo en una posicion especificada
int	get_value_at_position(t_list *stack, int pos)
{
	int	i;

	i = 0;
	while (stack)
	{
		if (i == pos)
			return (stack->value);
		// Retorna el valor del nodo en la posición especificada
		stack = stack->next;
		i++;
	}
	return (INT_MIN); // Retorna un valor especial si la posición no es válida
}
