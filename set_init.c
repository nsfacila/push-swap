/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noeliasanchezfacila <noeliasanchezfacil    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:03:36 by noelsanc          #+#    #+#             */
/*   Updated: 2025/03/16 14:20:21 by noeliasanch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


/*funcion para estructura de listas ,
	donde vamos a declarar dos aux que apunten al head de la lista.
dos bucles anidados, current para no perder la referencia,
	compare para comparar los valores de los nodos y aumentar el index ,
	si el valor del nodo es mayor
incrementa index si current es mayor que aux
Por ultimo asignamos index al campo index del nodo y avanzamos al siguiente nodo para volver a comparar*/
void	set_index(t_list **lst)
{
	t_list	*current;
	t_list	*aux;
	int		index;

	if (!lst || !*lst)
		return ;
	current = *lst;
	while (current)
	{
		index = 0;
		aux = *lst;
		while (aux)
		{
			if (current->value > aux->value)
				index++;
			aux = aux->next;
		}
		current->index = index;
		current = current->next;
	}
}
/*Declaro una variable aux que apunte al head y un integer i para establecer la posicion correspondiente a cada nodo
Bucle que recorra cada nodo mientras aumenta variable i,
	cuando avance la siguiente posicion*/
void	ft_set_position(t_list **lst)
{
	t_list	*aux;
	int		i;

	aux = *lst;
	i = 1;
	while (aux)
	{
		aux->pos = i;
		aux = aux->next;
		i++;
	}
}
/*Une los dos argumentos , esta funcion la creamos para comprobar errores en un solo argumento y eliminar argc 1*/
char	*ft_strjoin_arg(const char *s1, const char *s2)
{
	char	*joined;
	size_t		j;
	size_t		i;

	i = -1;
	j = -1;
	joined = malloc((ft_strlen(s1) + ft_strlen(s2) + 2) * sizeof(char));
		//+ 2 para el ' ' y el nulo
	if (!joined)
		return (NULL);
	if (!s1 || !s2)
		free(joined);
	while (++i < ft_strlen(s1))
		joined[i] = s1[i];
	joined[i++] = ' ';
	while (++j < ft_strlen(s2))
		joined[i++] = s2[j];
	joined[i] = '\0';
	return (joined);
}
char	*join_arg(int argc, char **argv)
{
	char	*temp;
	int		i;
	char	*joined;

	i = 1;
	joined = ft_strdup(""); //i = 1 para comenzar directamente en el argc 2
	while (i < argc)
	{
		temp = ft_strjoin_arg(joined, argv[i]);
		free(joined);
		joined = temp;
		i++;
	}
	return (joined);
}
/*quiero que esta funcion haga un chequeo de errores con las funciones que he creado de in_number,
	is duplicate*/
int	check_error(int argc, char **argv)
{
	char	*joined;
	int		i;
	char 	**split;

	joined = join_arg(argc, argv);// la funcion join_argc recibe argc y argv, numero de argumentos y argumentos qu queremos unir
	split = ft_split(joined, ' ');
	free(joined);
	//meter split aqui
	if(!split)
		return(1);

	i = 0;
	while (split[i]) //verificamos cada array de la matriz split
	{
		if (!is_number(split[i]))
		{
			free_split(split);
			return (1);
		}
		i++;
	}
	if(is_duplicate(split))
	{
		free_split(split);
		return(1);
	}
	free_split(split);
	return (0);
}