#include "push_swap.h"

// t_list *ft_lstlast(t_list *lst) //devolver el ultimo nodo de una lista
// {
// 	if(!lst)
// 		return(0);
// 	while(lst->next != 0)// el nodo actual llega al final
// 		lst = lst->next;
// 	return(lst);// recorre hasta el ultimo nodo ya que null ya no tiene nodo que apunte a nada, y devuelve el ultimo
// }

// void ft_lst_add_back(t_list **lst, t_list *new)// añadir un nuevo nodo a la lista , le pasamos un doble puntero de la list y un puntero del nuevo nodo?
// {
// 	t_list *aux;

// 	if(lst == NULL || new == NULL)
// 		return ;
// 	if(*lst == NULL)
// 		*lst = new;
// 	else
// 	{
// 		aux = *lst;
// 		while(aux->next != NULL)
// 			aux = aux->next;
// 		aux->next = new;
// 	}
// }

// #include <stdio.h>

// int ft_lstsize(t_list *lst)
// {
// 	int i = 0;
// 	if(!lst)
// 		return(0);
// 	while(lst)
// 	{
// 		i++;
// 		lst = lst->next;
// 	}
// 	return(i);
// }
// t_list *ft_lst_new(int num)//crear un nuevo nodo y establecer un valor, tipo int, char, *
// {
// 	t_list *new;

// 	new = (t_list *)malloc(sizeof(t_list));
// 	if(!new)
// 		return(NULL);
// 	if(new)
// 	{
// 		new->value = num;
// 		new->next = NULL;
// 	}
// 	return(new);
// }

t_list *createnode(int value, int pos, int index, char *ejemplo, int doble)
{
	t_list *newnode;
	newnode = (t_list *)malloc(sizeof(t_list));
	if(!newnode)
		return(NULL);
	newnode->value = value;
	newnode->pos = 0;
	newnode->index = 0;
	newnode->ejemplo = "hola";
	newnode->doble = 4;
	newnode->next = NULL;
	return(newnode);
}
void startnode(t_list **list, t_list *newnode)
{
	if(!list || !newnode)
		return ;
	newnode->next = *list; //quiero que el next de mi nuevo nodo apunte a lo que era mi primer nodo que *list asi list pasa a ser segundo nodo y mantengo new enlazado.
	*list = newnode; // ahora cambiamos el puntero que apunta al inicio de mi lista al nuevo nodo.
}
void print_list(t_list *lst)
{
	t_list *temp;
	temp = lst;
	while(temp != NULL)
	{
		printf("value[%i]", temp->value);
		temp = temp->next;// es como el i++ iterador para moverse al siguiente nodo
	}
}
void delete_node(t_list **lst, int value)
{
	if(!lst)
		return ;
	t_list *current = *lst;
	t_list *prev = NULL;
	if(current && current->value == value)

}
int main()
{
	t_list *new = createnode(10, 0, 0, "hola", 4);
	if(new)
	{
		printf("valor %d\n", new->value);
		printf("posicion %d\n", new->pos);
		printf("index: %d\n", new->index);
		printf("ejemplo: %s\n", new->ejemplo);
		printf("doble: %d\n", new->doble);
	}
	return(0);
}




// int main ()
// {
// 	t_list node1;
// 	t_list node2;

// 	node1.next = &node2;// usamos . porque decalramos varianle  y no un puntero 
// 	node2.next = NULL; // utilizamos & para asignar en next la direccion de node 2

// 	int i = ft_lstsize(&node1);

// 	printf("%d", i);
// }
// int main()
// {
// 	int numero = 10;
// 	t_list *node = ft_lst_new(numero);
// 	printf("%d", (int)node->value);
// }

