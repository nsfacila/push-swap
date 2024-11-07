/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 20:14:07 by noelsanc          #+#    #+#             */
/*   Updated: 2024/11/07 18:32:44 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ult;
	if (!new)
		return;
	if (*lst == NULL)
		(*lst) = new;
	else
	{
		ult = *lst;
		while (ult->next != NULL)
			ult = ult->next;
		(ult)->next = new;
	}
}
