/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:26:00 by jade-car          #+#    #+#             */
/*   Updated: 2023/11/13 02:20:04 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formatter(char fmword, va_list argptr)
{
	if (fmword == 'c')
		return (ft_char(va_arg(argptr, int)));
	else if (fmword == '%')
		return (ft_percent());
	else if (fmword == 's')
		return (ft_string(va_arg(argptr, const char *)));
	else if (fmword == 'p')
		return (ft_pointer(va_arg(argptr, unsigned long)));
	else if (fmword == '%')
		return (ft_percent());
	else if (fmword == 'i' || fmword == 'd')
		return (ft_putnbr(va_arg(argptr, int)));
	// else if (fmword == 'x' || fmword == 'X')
	// 	return (ft_hexdisplay(va_arg(argptr, unsigned int), fmword));
	// else if (fmword == 'u')
	// 	return (ft_unsigned(va_arg(argptr, unsigned int)));
	else
		return (-1);
}

int	ft_printf(char const *onscreen, ...)
{
	int		printsize;
	size_t	i;
	va_list	argptr;

	va_start (argptr, onscreen);
	i = 0;
	printsize = 0;
	while (onscreen[i])
	{
		if (onscreen[i] == '%')
		{
			i++;
			printsize += ft_formatter(onscreen[i], argptr);
			if (printsize == -1)
				return (printsize);
		}
		else
		{
			ft_char(onscreen[i]);
			printsize++;
		}
		i++;
	}
	va_end (argptr);
	return (printsize);
}