/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:31:02 by jade-car          #+#    #+#             */
/*   Updated: 2023/11/12 21:38:10 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	nb;

	if (!n)
		return (-1);
	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		ft_char('-');
	}
	if (nb / 10)
		ft_putnbr(nb / 10);
	return (ft_char(nb % 10 + 48));
}
