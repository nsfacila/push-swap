/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 20:13:54 by noelsanc          #+#    #+#             */
/*   Updated: 2024/05/23 20:13:57 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	len_n(long n)
{
	size_t	len;

	len = 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	long_n;

	long_n = n;
	len = len_n(long_n);
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	if (long_n < 0)
	{
		str[0] = '-';
		long_n *= -1;
	}
	str[len] = '\0';
	while (long_n > 9)
	{
		str[--len] = (long_n % 10) + '0';
		long_n = long_n / 10;
	}
	if (long_n >= 0)
		str[--len] = long_n + '0';
	return (str);
}
