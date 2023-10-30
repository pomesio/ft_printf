/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:04:35 by jade-car          #+#    #+#             */
/*   Updated: 2023/10/14 18:31:01 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	nb;

	if(!n)
		return(-1);
	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb / 10)
		ft_putnbr(nb / 10);
	return (ft_putchar(nb % 10 + 48));
}
int	main()
{
	ft_putnbr(-01287);
}
/* 
#NEED TEST
int	ft_putnbr(int n)
{
	if(!n)
		return(-1);
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n / 10)
		ft_putnbr(n / 10);
	return (ft_putchar(nb % 10 + 48));
}
*/
