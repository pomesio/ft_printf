/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:29:49 by jade-car          #+#    #+#             */
/*   Updated: 2023/10/14 17:19:12 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H 

//# <biblioteca.header>

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

//prototipo funciones;
int		ft_printf(char const *sformat, ...);
int		ft_putchar(int c);
int		ft_putstr(const char *s);
int		ft_putnbr(int n);

#endif
