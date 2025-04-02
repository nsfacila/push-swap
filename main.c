/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noeliasanchezfacila <noeliasanchezfacil    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:04:14 by noelsanc          #+#    #+#             */
/*   Updated: 2025/04/02 23:09:08 by noeliasanch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

static size_t	ft_toklen(const char *s, char c)
{
	size_t	ret;

	ret = 0;
	while (*s)
	{
		if (*s != c)
		{
			++ret;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (ret);
}

void	free_split(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

int	ft_checkarguments(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (argv[i][0] == '\0')
			return (0);
		i++;
	}
	return (1);
}

void	free_list(t_list **lst)
{
	t_list	*aux;

	aux = *lst;
	while (aux)
	{
		aux = aux->next;
		free(*lst);
		*lst = aux;
	}
	// free(lst);
}
/*
int	main(int argc, char **argv)
{
	t_list *a;
	t_list *b;
	t_list *new;
	int i;
	char **split;
	char *joined_args;
	int z;
	//split = (char **)malloc((argc - 1) * sizeof(char)); esto solo lo inicializo en caso de que no utilice join_arg

	a = NULL;
	b = NULL;
	//new = NULL;
	i = 1;
	if (argc == 1)
		return (write(2, "Please insert numbers\n", 22), 1);
	if (ft_checkarguments(argv) == 0)
		return (write(2, "Null argument Error\n", 20), 1);
	if (check_error(argc, argv) == 1)
		return (write(2, "Number error or duplicate argument\n", 36), 1);
		//unir los argumentos y dividirlos en una matriz de cadenas
	joined_args = join_arg(argc, argv);
	if (!joined_args)
		return (write(2, "Memory allocation error\n", 24), 1);
	split = ft_split(joined_args, ' ');
	free(joined_args);
	
	//convertir las cadenas en enteros y añadirlos a la lista
	z = 0;
	while (split[z])
	{
		new = ft_listnew(ft_atoi(split[z]));
		ft_lstadd_back(&a, new);
		z++;
	}
	free_split(split);
	
	print_list(&a, 'A');
	//ft_set_position(&a);
	//print_list(&a, 'A');
	//set_index(&a);
	//print_list(&a, 'A');
	push_swap(&a, &b);
	//rotate(&a);
	// print_list(&a, 'A');
	// print_list(&b, 'B');
	// push(&a, &b);
	print_list(&a, 'A');
	// print_list(&b, 'B');
	free_list(&a);
	free_list(&b);
}*/

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_list *a;
    t_list *b;

    a = NULL;
    b = NULL;

    if (argc == 1 || (argc == 2 && !argv[1][0]))
        return (1);

    if (argc == 2)
        parse_single_argument(argv[1], &a);
    else
        parse_arguments(argc, argv, &a);

    if (!ft_check_sorted(a))
    {
        if (ft_lstsize(a) == 2)
            sa(&a);
        else if (ft_lstsize(a) == 3)
            tiny_sort(&a);
        else
            push_swap(&a, &b);
    }

    free_list(&a);
    return (0);
}



