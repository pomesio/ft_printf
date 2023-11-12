/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:29:49 by jade-car          #+#    #+#             */
/*   Updated: 2023/11/12 21:40:44 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H 

//# <biblioteca.header>

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

//prototipo funciones;
int	ft_hexdisplay(unsigned int number, char format_type);
int	ft_char(int c);
int	ft_percent(void);
int	ft_pointer(unsigned long num);
int	ft_printf(char const *onscreen, ...);
int	ft_putnbr(int n);
int	ft_string(const char *s);
int	ft_unsigned(unsigned int num);
#endif
