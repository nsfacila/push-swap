/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 20:14:07 by noelsanc          #+#    #+#             */
/*   Updated: 2025/02/11 20:36:04 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Creamos una variable auxiliar que aunte a head
verificamos que lista no sea null, si es null añadimos new t_list
si no es null usamos el auxiliar para recorre lista y cuando llegue al ultimo nodo añadimos new,
	actualizamos el puntero de new hacia NULL*/
void	ft_lstadd_back(t_list **lst, t_list *node)
{
	t_list	*aux;

	if (!node)
		return ;
	if (*lst == NULL)
		(*lst) = node;
	else
	{
		aux = *lst;
		while (aux->next)
			aux = aux->next;
		aux->next = node;
		node->next = NULL;
	}
}
