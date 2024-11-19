#include "push_swap.h"

void	swap(t_list **stack)
// {
// 	t_list	*tmp;

// 	tmp = (*stack)->next;
// 	(*stack)->next = (*stack)->next->next;
// 	tmp->next = *stack;
// 	*stack = tmp;
// }
{
	t_list *first;
	t_list *second;

	first = *stack;
	second = (*stack)->next;

	
}

void	rotate(t_list **stack)
{
	t_list	*first;
	t_list	*second;
	t_list	*last;

	first = *stack;
	second = (*stack)->next;
	last = *stack;
	while (last->next)
		last = last->next;

	first->next = NULL;
	*stack = second;
	last->next = first;
}
void	reverse_rotate(t_list **stack)
{
	t_list	*first;
	t_list	*prev;
	t_list	*last;

	first = *stack;
	last = *stack;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	*stack = last;
	last->next = first;
	prev->next = NULL;
}
void	push(t_list **a, t_list **b)
{
	t_list *aux_a;
	t_list *aux_b;

	aux_a = *a;
	aux_b = *b;

	*a = aux_b;
	aux_b->next = aux_a;
	*b = (*b)->next;
}