/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 20:34:13 by noelsanc          #+#    #+#             */
/*   Updated: 2024/05/23 20:34:15 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	int		start;
	int		end;

	start = 0;
	if (s1 [start] == 0)
		return (ft_strdup(""));
	end = ft_strlen(s1);
	while (ft_strchr (set, s1[start]))
		start++;
	while (ft_strchr (set, s1[end]))
		end--;
	str = ft_substr (s1, start, (end - start) + 1);
	return (str);
}
