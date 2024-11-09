/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:44:41 by noelsanc          #+#    #+#             */
/*   Updated: 2024/11/09 16:41:48 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int ft_isdigit(char c)// verificamos si un caracter es numerico
{
	if(c >= 0 && c <= 9)
		return (1);
	else
		return(0);
}
int is_number(char *str)// verificamos si la str es de numeros
{
	int i;
	i = 0;
	if(str[i] == '-' || str[i] == '+')
		i++;
	if(!str)
		return(0);
	if
}