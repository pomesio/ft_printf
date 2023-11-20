/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interger.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 09:49:42 by jade-car          #+#    #+#             */
/*   Updated: 2023/11/20 19:33:30 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_interger(int n)
{
	int			size;
	long int	nb;

	size = 0;
	nb = n;
	if (n <= -2147483647)
	{
		if (write(1, "-2147483648", 11) == -1)
			return (-1);
		return (11);
	}
	else if (n < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		nb = -n;
		size++;
	}
	if (nb >= 10)
		size += ft_interger(nb / 10);
	if (size == -1)
		return (-1);
	size += ft_char(nb % 10 + '0');
	return (size);
}
