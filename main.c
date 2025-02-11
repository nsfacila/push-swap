/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 21:26:27 by noelsanc          #+#    #+#             */
/*   Updated: 2025/02/11 20:26:23 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void set_doble(t_list **a)
{
	t_list *aux;
	aux = *a;
	while(aux)
	{
		if(aux->value % 2 == 0)
			aux->value = aux->value * -1;
		aux->doble = aux->value * 2;
		aux = aux->next;
	}
}

void set_ejemplo(t_list **a)
{
	t_list *aux;
	char c;

	aux = *a;
	c = 'a';
	while(aux)
	{
		aux->ejemplo = &c;
		aux = aux->next;
		c++;
	}
	set_doble(a);
}

void	set_position(t_list **a)
{
	t_list *aux;
	int		position;

	aux = *a;
	position = 1;
	while(aux)
	{
		aux->pos = position;
		aux = aux->next;
		position++;
	}
	set_ejemplo(a);
}

int main(int argc, char **argv)
{
	t_list *a;
	t_list *b;
	t_list *t_list;
	int i;

	a = NULL;
	b = NULL;
	i = 1;
	while(i < argc)
	{
		t_list = ft_lstnew(ft_atoi(argv[i]));
		ft_lstadd_back(&a, t_list);
		i++;
	}
	set_position(&a);
	
	print_list(&a, 'A');
	print_list(&b, 'B');
}