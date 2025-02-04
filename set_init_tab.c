/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_init_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:03:49 by noelsanc          #+#    #+#             */
/*   Updated: 2025/02/04 16:55:42 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

/*
La funcion sort in tab, ordena un array de numero con un tamaño dado
creamos auxiliar para intercambie los numeros en el orden correcto,
	i para iterar en el array
buble que recorre el array y una condicion que compare el numero actual con el numero siguiente,
si es mayor que el siguiente los intercambia hasta encontrar posicion correcta,
	devuelve puntero al array ordenado*/
int	*sort_in_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			aux = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = aux;
			i = 0;
		}
		else
			i++;
	}
	return (tab);
}
/*Creamos un auxiliar que apunta el head de la lista para no perder la referencia
i para iterar sobre el array, y hacemos un buble anidado,
	el de fuera recorre lista hasta el final
el de dentro recorre el array de numeros ,
	establecemos una condicion cuando el valor de tab y lista concidan
y en ese caso en el nodo establecemos el index del valor actua,*/
void	ft_the_real_set_index(int *tab, t_list **a, int size)
{
	int		i;
	t_list	*aux;

	aux = *a;
	i = 0;
	while (aux)
	{
		while (i < size)
		{
			if (tab[i] == aux->value)
				aux->index = i + 1;
			i++;
		}
		aux = aux->next;
	}
	free(tab);
}
/*marca el index que debera tener cada valor al hacer la ordenacion correcta
creamos puntero de array auxiliar y puntero al head auxiliar,
	y almacenamos espacio con malloc para el array de numeros
de tamaño de numero de nodos * tamaño de int
bucle para recorrer lista y establecer en el array en valor de cada nodo
posteriormente llamamos a sort in tab para odenar numeros en posicion ascendente y se llama set the real index
para asiganr los indices a los nodos basandose en el array ordenado */

void	set_index(t_list **a)
{
	int		*tab;
	int		i;
	t_list	*aux;

	tab = (int *)malloc(ft_lstsize(*a) * sizeof(int));
	aux = *a;
	i = 0;
	while (aux)
	{
		tab[i] = aux->value;
		aux = aux->next;
		i++;
	}
	tab = sort_int_tab(tab, ft_lstsize(*a));
	ft_the_real_set_index(tab, a, ft_lstsize(*a));
}
