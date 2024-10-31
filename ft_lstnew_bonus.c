/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 20:16:06 by noelsanc          #+#    #+#             */
/*   Updated: 2024/09/10 22:15:07 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swapin.h"

t_list	*ft_lstnew(int value)
{
	t_list	*newnode;

	newnode = (t_list *)malloc(sizeof(t_list));
	if (!newnode)
		return (NULL);
	newnode->value = value;
	newnode->pos = 0;
	newnode->index = 0;
	newnode->ejemplo = 'a';
	newnode->doble = 2;
	newnode->next = NULL;
	return (newnode);
}
