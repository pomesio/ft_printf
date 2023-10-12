/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:26:00 by jade-car          #+#    #+#             */
/*   Updated: 2023/10/12 19:45:23 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//faltan cosas

int	ft_printf(char const *strformat, ...)
{
	//type va_list(object)
	va_list argptr;
	
	//initialize va_list type
	va_start (argptr, strformat);

	//call formatlookup

	//object to close
	va_end(argptr);
}
