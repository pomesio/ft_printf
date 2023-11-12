/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:32:34 by jade-car          #+#    #+#             */
/*   Updated: 2023/11/12 21:34:20 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int num)
{
	int	sizenum; //Stores length num
	int	tempo; //tmp variable, multitasking
	int	divisor; //Para imprimir el resultado en orden
	//Length of num
	sizenum = 0;
	tempo = num;
	divisor = 1;
	while (tempo > 0)
	{
		tempo = tempo / 10;
		divisor = divisor * 10;
		sizenum++;
	}
	while (divisor > 1)
	{
		divisor = divisor / 10;
		tempo = (num / divisor) % 10;
		ft_char('0' + tempo);
	}
	return (sizenum);
}
/*
int main() {
	unsigned int numeros = 0;
	int nums = ft_unsigned(numeros);
	printf("\n nums impreso: %d\n", nums);
	return 0;
}
*/
/*
 * num = 12345
 * 
 * ---PrintUnsigned---
 * 12345 mod 10 == 5
 * 1234 mod 10 == 4
 * 123 mod 10 == 3
 * 12 mod 10 == 2
 * 1 mod 10 == 1
 *
 * ---CountUnsigned---------------------
 * 12345 / 10 == 1234.5 (es int) == 1234
 * 1234 / 10 == 123
 * 123 / 10 == 12
 * 12 / 10 == 1
 * 1 / 10 == 0
 *
 * ---Implicit cast
 *
 * */
