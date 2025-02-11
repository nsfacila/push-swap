/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 20:15:54 by noelsanc          #+#    #+#             */
/*   Updated: 2025/02/11 20:38:53 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	//t_list	*new_lst;
	//t_list	*new_t_list;

	if (!lst || !f || !del)
		return (NULL);
	//new_lst = NULL;
/* 	while (lst)
	{
		new_t_list = ft_lstnew(NULL);
		if (!new_t_list)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		new_t_list ->content = f(lst->content);
		ft_lstadd_back(&new_lst, new_t_list);
		lst = lst->next;
	} */
	return (NULL);
}
