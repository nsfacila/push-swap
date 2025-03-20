#include "push_swap.h"

void push_swap(t_list **a, t_list **b)
{
	int size;
	int min_pos;

	size = ft_lstsize(a);
	
	if(size == 1)
		return ;
	if(size == 2)
		sort_two(a);
	else if(size == 3);
		sort_three(a);
	else
	{
		while(ft_lstsize(*a) > 3)
		{
			min_pos = get_min_pos(a)
			if(get_min_pos == 0)
				push_b(a, b);
			else if(min_pos <= ft_lstsize(*a) / 2 )
				rotate(a);
			else
				reverse_rotate(a);
		}
		short_three(a);
		while(*b)
			push_a(a, b);
	}
}
void get_min_pos(t_list **a)
{
	t_list *aux;
	int min;
	int min_pos;
	int pos;

	while(!a || *a)
		return NULL;
	aux = *a;
	min = aux->value;
	min_pos = 0;
	pos = 0;

	while(aux)
	{
		if(aux->value < min)
		{
			min = aux->value;
			min_pos = pos;
		}
		aux = aux->next;
		pos++;
	}
	return(min_pos);
}