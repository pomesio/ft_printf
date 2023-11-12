/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:31:54 by jade-car          #+#    #+#             */
/*   Updated: 2023/11/12 22:28:59 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_string(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return(write(1, "(null)", 6));
	while (s[i])
		write(1, &s[i++], 1);
	return (i);
}