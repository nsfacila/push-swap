#include "push_swap.h"

void	push_swap(t_list **a, t_list **b)
{
	int	size;
	int	min_pos;
	int	min_cost_pos;
	int	insert_pos;

	size = ft_lstsize(*a);
	if (size == 1)
		return ;
	if (size == 2)//esta mal porque hay que chequear aqui si esta ordenado primero
		sa(a);
	else if (size == 3)
		tiny_sort(a);
	else
	{
		while (ft_lstsize(*a) > 3)
		{
			min_pos = get_min_pos(a);
			if (min_pos == 0)
				pb(a, b);
			else if (min_pos <= ft_lstsize(*a) / 2)
				ra(a);
			else
				rra(a);
		}
		tiny_sort(a);
		while (*b)
		{
			min_cost_pos = find_min_cost_position(*a, *b);
			insert_pos = find_insert_position(*a, (*b)->value);
			// Detectar si se puede usar `ss`
			if (ft_lstsize(*a) > 1 && ft_lstsize(*b) > 1 && (*a)->value > (*a)->next->value
				&& (*b)->value > (*b)->next->value)
				ss(a, b);
			else
				move_to_top(a, b, insert_pos, min_cost_pos);
			pa(a, b);
		}
	}
}

int	get_min_pos(t_list **a)
{
	t_list	*aux;
	int		min;
	int		min_pos;
	int		pos;

	if (!a || !*a)
		return (-1);	// es una forma de manejar casos en los que la lista es nula o esta vacia,
	aux = *a;
	min = aux->value;
	min_pos = 0;
	pos = 0;
	while (aux)
	{
		if (aux->value < min)
		{
			min = aux->value;
			min_pos = pos;
		}
		aux = aux->next;
		pos++;
	}
	return (min_pos);
}
int	calculate_cost_to_top(t_list *stack, int pos)
{
	int	size;

	size = ft_lstsize(stack);
	if (pos <= size / 2)
		return (pos); // Coste hacia arriba (ra o rb)
	else
		return (size - pos); // Coste hacia abajo (rra o rrb)
}
int	find_insert_position(t_list *a, int value)
{
	t_list	*current;
	int		pos;

	pos = 0;
	current = a;
	while (current)
	{
		if (current->value > value)
			return (pos);
		current = current->next;
		pos++;
	}
	return (pos); // Si no se encuentra, insertar al final
}
// Calcular el coste total para un elemento de b

int	calculate_total_cost(t_list *a, t_list *b, int b_pos)
{
	int	b_value;
	int	cost_b;
	int	insert_pos;
	int	cost_a;

	b_value = get_value_at_position(b, b_pos);
	// Obtén el valor en la posición b_pos
	cost_b = calculate_cost_to_top(b, b_pos);
	// Coste de mover el elemento al tope de b
	insert_pos = find_insert_position(a, b_value);
	// Posición de inserción en a
	cost_a = calculate_cost_to_top(a, insert_pos);
	// Coste de mover el elemento al tope de a
	return (cost_a + cost_b); // Coste total
}
// encontrar el elemnto con el menor coste
int	find_min_cost_position(t_list *a, t_list *b)
{
	int	min_cost;
	int	min_pos;
	int	i;
	int	size;
	int	cost;

	min_cost = INT_MAX;
	min_pos = 0;
	i = 0;
	size = ft_lstsize(b);
	while (i < size)
	{
		cost = calculate_total_cost(a, b, i);
		if (cost < min_cost)
		{
			min_cost = cost;
			min_pos = i;
		}
		i++;
	}
	return (min_pos);
}
void	move_to_top(t_list **a, t_list **b, int pos_a, int pos_b)
{
	int size_a;
	int size_b;
	int up_a;
	int down_a;
	int up_b;
	int down_b;

	size_a = ft_lstsize(*a);
	size_b = ft_lstsize(*b);
	up_a = pos_a;
	down_a = size_a - pos_a;
	up_b = pos_b;
	down_b = size_b - pos_b;
	while (up_a > 0 && up_b > 0)
	{
		rr(a, b);
		up_a--;
		up_b--;
	}
	while (down_a > 0 && down_b > 0)
	{
		rrr(a, b);
		down_a--;
		down_b--;
	}
	while (up_a-- > 0)
		ra(a);
	while (down_a-- > 0)
		rra(a);
	while (up_b-- > 0)
		rb(b);
	while (down_b-- > 0)
		rrb(b);
}