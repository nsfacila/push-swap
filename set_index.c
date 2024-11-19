#include "push_swap.h"

int ft_lstsize(t_list *lst)
{
	int i;
	i = 0;
	if(!lst)
		return(0);
	while(lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return(i);
}
int *sort_in_tab(int *tab, int size);//esta funcion devuelve el tab que es un * int {1,2,3,4}

//queremos establecer un index a cada valor de mi lista
void set_index(t_list **a)// le pasamos la lista en este caso que sera el stack a
{
	int *tab;//creamos una variable que sea una string the ints
	int i;
	t_list *aux;// mi puntero auxiliar que apunte al inicio de list a
	i = 0;
	tab = (int *)malloc(ft_lstsize(*a) * sizeof(int));
	aux = *a;
	while(aux)
	{
		tab[i] = aux->value;
		aux = aux->next;
		i++;
	}
	tab = sort_in_tab(tab, ft_lstsize(*a));
	
}