/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 20:33:11 by noelsanc          #+#    #+#             */
/*   Updated: 2024/05/23 20:39:34 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	lenght_s;
	size_t	lenght_d;
	size_t	i;

	lenght_s = ft_strlen(src);
	lenght_d = ft_strlen(dest);
	if (lenght_d >= size)
	{
		return (lenght_s + size);
	}
	if (lenght_d < size)
	{
		i = 0;
		while (src[i] != '\0' && (lenght_d + i + 1 < size))
		{
			dest[lenght_d + i] = src[i];
			i++;
		}
		dest[lenght_d + i] = '\0';
	}
	return (lenght_s + lenght_d);
}
