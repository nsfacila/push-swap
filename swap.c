#include "push_swap.h"

void	swap(t_list **stack)
{
	t_list	*first;
	t_list	*second;

	first = *stack;
	second = (*stack)->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}
void	sa(t_list **stack)
{
	if (*stack == NULL || stack == NULL)
		return ;
	swap(stack);
	write(1, "sa\n", 1);
}
void	sb(t_list **stack)
{
	if (*stack == NULL || stack == NULL)
		return ;
	swap(stack);
	write(1, "sb\n", 1);
}
void	ss(t_list **a, t_list **b)
{
	if (*a == NULL || a == NULL)
		return ;
	if (*b == NULL || b == NULL)
		return ;
	swap(a);
	swap(b);
	write(1, "ss\n", 1);
}