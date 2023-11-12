/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 01:15:01 by jade-car          #+#    #+#             */
/*   Updated: 2023/11/12 23:47:40 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long num)
{
	char	*ptrmask;
	char	contenedor;
	ssize_t	size;

	size = 0;
	ptrmask = "0123456789abcdef";
	while (num > 15) {
		contenedor = ft_char((ptrmask[num % 16]));
		if (contenedor < 0) {
			return (-1);
		}
		size++;
		num /= 16;
	}
	if (ft_char((ptrmask[num % 16])) < 0) {
		return (-1);
	}
	return (size + 2);
}

