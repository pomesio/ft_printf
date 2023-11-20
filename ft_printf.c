/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:13:16 by jade-car          #+#    #+#             */
/*   Updated: 2023/11/20 20:13:23 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formatter(char format, va_list argptr)
{
	int	mida;

	mida = 0;
	if (format == 'c')
		mida += ft_char(va_arg(argptr, int));
	else if (format == 's')
		mida += ft_string(va_arg(argptr, char *));
	else if (format == 'p')
		mida += ft_pointer(va_arg(argptr, unsigned long), "0123456789abcdef");
	else if (format == 'i' || format == 'd')
		mida += ft_interger(va_arg(argptr, int));
	else if (format == 'x')
		mida += ft_hexadec(va_arg(argptr, unsigned int), "0123456789abcdef");
	else if (format == 'X')
		mida += ft_hexadec(va_arg(argptr, unsigned int), "0123456789ABCDEF");
	else if (format == 'u')
		mida += ft_unsigned(va_arg(argptr, unsigned int));
	else if (format == '%')
		return (write(1, "%", 1));
	return (mida);
}

int	ft_printf(const char *onscreen, ...)
{
	int		i;
	int		mida;
	va_list	argptr;

	va_start (argptr, onscreen);
	i = 0;
	mida = 0;
	while (onscreen[i])
	{
		if (onscreen[i] == '%')
		{
			mida += ft_formatter(onscreen[++i], argptr);
			if (mida == -1)
				return (-1);
		}
		else
		{
			if (write(1, &onscreen[i], 1) == -1)
				return (-1);
			mida ++;
		}
		i++;
	}
	va_end (argptr);
	return (mida);
}
