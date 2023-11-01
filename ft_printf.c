/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:26:00 by jade-car          #+#    #+#             */
/*   Updated: 2023/10/14 18:40:02 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formatter(char fmword, va_list argptr)
{
	if (fmword == 'c')
		return (ft_putchar(va_arg(argptr, int)));
	else if (fmword == 's')
		return (ft_putstr(va_arg(argptr, const char *)));
	else if (fmword == 'i')
		return (ft_putnbr(va_arg(argptr, int)));
	else if (fmword == 'd')
		return (ft_putnbr (va_arg(argptr, int)));
	else if (fmword == '%')
		return(ft_putpercent);
	return (-1);
}

int	ft_printf(char const *onscreen, ...)
{
	int	printsize;
	size_t	i;
	va_list	argptr;

	va_start (argptr, onscreen); //se puede reducir a 1 linea (x || y)
	i = 0;
	printsize = 0;
	while (onscreen[i])
	{
		if (onscreen[i] == '%')
		{
			i++;
			printsize += ft_formatter(onscreen[i], argptr); //cambiar a onscreen[i++] o ++i
			if (printsize == -1)
				return (printsize);
		}
		else
		{
			ft_putchar(onscreen[i]);
			printsize++;
		}
		i++;
	}
	va_end (argptr);
	return (printsize);
}
