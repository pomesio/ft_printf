/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:29:12 by jade-car          #+#    #+#             */
/*   Updated: 2023/11/12 21:42:28 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hexdisplay(unsigned int number, char format_type)
{
	char	*hexmask;
	int		size;
	
	size = 0;
	if(format_type == 'X')
		hexmask = "0123456789ABCDEF";
	else
		hexmask = "0123456789abcdef";
	while (number > 0)
	{
		if (ft_char(hexmask[number % 16]) == -1)
		return (-1);
		size++;
		number /= 16;
	}
	return (size);
}