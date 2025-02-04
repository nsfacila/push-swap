/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 20:33:04 by noelsanc          #+#    #+#             */
/*   Updated: 2024/05/23 20:33:06 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	int		i;
	int		j;
	char	*cat;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	cat = malloc(len_s1 + len_s2 + 1);
	if (!s1 || !s2 || !cat)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		cat[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		cat[i++] = s2[j++];
	}
	cat[i] = '\0';
	return (cat);
}
