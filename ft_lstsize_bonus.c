/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 20:16:40 by noelsanc          #+#    #+#             */
/*   Updated: 2024/09/10 21:25:54 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swapin.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst != 0)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
