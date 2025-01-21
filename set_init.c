#include "push_swap.h"


/*funcion para estructura de listas , donde vamos a declarar dos aux que apunten al head de la lista.
dos bucles anidados, current para no perder la referencia, compare para comparar los valores de los nodos y aumentar el index , si el valor del nodo es mayor
incrementa index si current es mayor que aux
Por ultimo asignamos index al campo index del nodo y avanzamos al siguiente nodo para volver a comparar*/
void	set_index(t_list **lst)
{
	if(!lst || !*lst)
		return;

	t_list *current;
	current = *lst;
	t_list *aux;
	int index; 

	while(current)
	{
		index = 0;
		aux = *lst;
		while(aux)
		{
			if(current->value > aux->value)
				index++;
			aux = aux->next;
		}
		current->index = index;
		current = current->next;
	}
}
/*Declaro una variable aux que apunte al head y un integer i para establecer la posicion correspondiente a cada nodo
Bucle que recorra cada nodo mientras aumenta variable i, cuando avance la siguiente posicion*/
void	ft_set_position(t_list **lst)
{
	t_list	*aux;
	int		i;

	aux = *lst;
	i = 1;
	while(aux)
	{
		aux->pos = i;
		aux = aux->next;
		i++;
	}
}