/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 20:31:47 by noelsanc          #+#    #+#             */
/*   Updated: 2024/05/23 20:36:53 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst == NULL && src == NULL)
	{
		return (NULL);
	}
	i = 0;
	if (dst < src)
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		while (len--)
		{
			((unsigned char *)dst)[len] = ((const unsigned char *)src)[len];
		}
	}
	return (dst);
}
