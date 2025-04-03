/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 16:25:32 by noelsanc          #+#    #+#             */
/*   Updated: 2025/04/03 17:04:48 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// chequeo de errores,variable puntero que almacene union de argumentos(esta funcion es para varios argumentos) y posteriormente llamar a split para que cada valor se almacene dentro de un nodo
// en una lista que vamos a crear con lstnew
void	parse_arguments(int argc, char **argv, t_list **a)
{
	char	*joined_args;
	char	**split;
	int		i;

	joined_args = join_arg(argc, argv);
	if (!joined_args)
		return (write(2, "Memory allocation error\n", 24), exit(1));
	split = ft_split(joined_args, ' ');
	free(joined_args);
	i = 0;
	while (split[i])
	{
		ft_lstadd_back(a, ft_listnew(ft_atoi(split[i])));
		i++;
	}
	free_split(split);
}
// si solo entra un argumento ,directamente lo divide con split y crea nodos en una lista .
void	parse_single_argument(char *arg, t_list **a)
{
	char	**split;
	int		i;

	split = ft_split(arg, ' ');
	i = 0;
	while (split[i])
	{
		ft_lstadd_back(a, ft_listnew(ft_atoi(split[i])));
		i++;
	}
	free_split(split);
}
int	check_error(int argc, char **argv)
{
	char *joined;
	int i;
	char **split;

	joined = join_arg(argc, argv);
	split = ft_split(joined, ' ');
	free(joined);

	if (!split)
		return (1);

	i = 0;
	while (split[i])
	{
		if (!is_number(split[i]))
		{
			free_split(split);
			return (1);
		}
		i++;
	}
	if (is_duplicate(split))
	{
		free_split(split);
		return (1);
	}
	free_split(split);
	return (0);
}