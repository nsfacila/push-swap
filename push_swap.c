/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:04:14 by noelsanc          #+#    #+#             */
/*   Updated: 2025/02/11 22:04:19 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

/* size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
} */

/* char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (start > ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s) - start)
		len = (ft_strlen(s) - start);
	sub = (char *)malloc(len + 1);
	if (!s || !sub)
		return (NULL);
	while (s[i] != '\0' && i < len)
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
} */

/* int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 9 || str[i] == 10 || str[i] == 11 || str[i] == 12
		|| str[i] == 13 || str[i] == 32)
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
} */

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

static void	free_split(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

/* char	**ft_split(const char *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	len;

	ret = malloc(sizeof(char *) * (ft_toklen(s, c) + 1));
	if (!s || !ret)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			ret[i++] = ft_substr(s - len, 0, len);
			if (!ret[i - 1])
				return (free_split(ret), NULL);
		}
		else
			++s;
	}
	ret[i] = 0;
	return (ret);
} */

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
int	main(int argc, char **argv)
{
	t_list *a;
	//t_list *b;
	t_list *new;
	int i;
	char **split;
	//char *joined_args;
	int z;
	//split = (char **)malloc((argc - 1) * sizeof(char)); esto solo lo inicializo en caso de que no utilice join_arg

	a = NULL;
	//b = NULL;
	//new = NULL;
	i = 1;
	if (argc == 1)
		return (write(2, "Please insert numbers\n", 22), 1);
	if (ft_checkarguments(argv) == 0)
		return (write(2, "Null argument Error\n", 20), 1);
	//if (check_error(argc, argv) == NULL)
		//return (write(2, "Number error or duplicate argument\n", 36), 1);
	//joined_args = join_arg(argc, argv);
	//if (!joined_args)
		//return (write(2, "Memory allocation error\n", 24), 1);
	//split = ft_split(joined_args, ' ');
	//free(joined_args);
	split = ft_split(argv[i], ' ');
	z = 0;
	while (split[z])
	{
		new = ft_listnew(ft_atoi(split[z]));
		ft_lstadd_back(&a, new);
		z++;
	}
	free_split(split);
	
	print_list(&a, 'A');
	ft_set_position(&a);
	print_list(&a, 'A');
	set_index(&a);
	print_list(&a, 'A');
	sort_three(&a);
	//rotate(&a);
	// print_list(&a, 'A');
	// print_list(&b, 'B');
	// push(&a, &b);
	print_list(&a, 'A');
	// print_list(&b, 'B');
	free_list(&a);
}