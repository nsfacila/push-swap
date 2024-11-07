#include "push_swap.h"

void swap(t_list **stack)
{
	t_list *tmp;

	tmp = (*stack)->next;
	(*stack)->next = (*stack)->next->next;
	tmp->next = *stack;
	*stack = tmp;
}
void rotate(t_list **stack)
{
	t_list *tmp;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = NULL;
	(*stack)->next->next = *stack;
}


