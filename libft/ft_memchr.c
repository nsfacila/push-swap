/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 20:17:12 by noelsanc          #+#    #+#             */
/*   Updated: 2024/05/23 20:17:16 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	d;
	size_t			i;

	str = (unsigned char *)s;
	d = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == d)
			return (&((void *)str)[i]);
		i++;
	}
	return (NULL);
}
