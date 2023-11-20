/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 09:48:45 by jade-car          #+#    #+#             */
/*   Updated: 2023/11/20 19:37:46 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadec(unsigned int number, char *xtype)
{
	int	size;

	size = 0;
	if (number < 16)
	{
		if ((ft_char(xtype[number % 16])) == -1)
			return (-1);
		size++;
	}
	else
	{
		size += ft_hexadec(number / 16, xtype);
		if (size == -1)
			return (-1);
		size += ft_char(xtype[number % 16]);
	}
	return (size);
}
