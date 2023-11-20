/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:09:29 by jade-car          #+#    #+#             */
/*   Updated: 2023/11/20 21:15:42 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer_basic(unsigned long ptr, char *mask)
{
	int	size;

	size = 0;
	if ((void *)ptr == NULL)
	{
		if (write(1, "0x0", 3) == -1)
			return (-1);
		return (3);
	}
	if (ptr < 16)
	{
		if (write(1, "0x", 2) == -1)
			return (-1);
		size += 2;
		size += ft_char(mask[ptr % 16]);
	}
	return (size);
}

int	ft_pointer_recursive(unsigned long ptr, char *mask, int size)
{
	int	aux;

	aux = size;
	size += ft_pointer(ptr / 16, mask);
	if (aux > size)
		return (-1);
	size += ft_char(mask[ptr % 16]);
	if (aux > size)
		return (-1);
	return (size);
}

int	ft_pointer(unsigned long ptr, char *mask)
{
	int	size;

	size = ft_pointer_basic(ptr, mask);
	if (size == 0)
		return (ft_pointer_recursive(ptr, mask, size));
	return (size);
}
