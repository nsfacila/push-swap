/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 20:16:06 by noelsanc          #+#    #+#             */
/*   Updated: 2025/02/11 20:37:25 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int content)
{
	t_list	*newt_list;

	newt_list = (t_list *)malloc(sizeof(t_list));
	if (!newt_list)
		return (NULL);
	newt_list -> value = content;
	newt_list -> next = NULL;
	return (newt_list);
}
