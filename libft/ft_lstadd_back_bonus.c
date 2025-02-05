/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 20:14:07 by noelsanc          #+#    #+#             */
/*   Updated: 2025/02/05 17:26:58 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Creamos una variable auxiliar que aunte a head
verificamos que lista no sea null, si es null añadimos new node
si no es null usamos el auxiliar para recorre lista y cuando llegue al ultimo nodo añadimos new,
	actualizamos el puntero de new hacia NULL*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!new)
		return ;
	if (*lst == NULL)
		(*lst) = new;
	else
	{
		aux = *lst;
		while (aux->next)
			aux = aux->next;
		aux->next = new;
		new->next = NULL;
	}
}
