/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:44:41 by noelsanc          #+#    #+#             */
/*   Updated: 2024/11/19 17:12:50 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_isdigit(char c)// verificamos si un caracter es numerico
{
	if(c >= 0 && c <= 9)
		return (1);
	else
		return(0);
}
int is_number(char *str)// verificamos si la str es de numeros
{
	int i;
	i = 0;
	if(str[i] == '-' || str[i] == '+')
		i++;
	if(!str)
		return(0);
	if
}
int lst_size(t_list *lst)
{	
	int i;
	i = 0;
	
	if(!lst)
		return(0);
	
	while(lst->next)
	{
		i++;
		lst = lst->next;
	}
	return(i);
}
#include "push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}