/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:54:55 by elerner           #+#    #+#             */
/*   Updated: 2023/08/23 18:15:58 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
This function helps us select the type of data to be printed,
it receives two parameters, one called "arg" of type va_list, 
which expects to receive one or more arguments, and another 
parameter "t" of type char, which indicates the argument type.
It will return on the standard output the data that needs to be 
printed on the screen.

Esta función nos ayuda a seleccionar el tipo de datos a imprimir,
recibe dos parámetros, uno llamado "arg" de tipo va_list,
que espera recibir uno o más argumentos, y otro
parámetro "t" de tipo char, que indica el tipo de argumento.
Devolverá en la salida estándar los datos que deben ser
impreso en la pantalla.
*/

int	ft_type(va_list arg, char t)
{
	int	j;

	j = 0;
	if (t == 'c')
		j = j + ft_putchar(va_arg(arg, int));
	else if (t == 's')
		j = j + ft_putstr(va_arg(arg, char *));
	else if (t == 'p')
		j = j + ft_ptr(va_arg(arg, void *));
	else if (t == 'i' || t == 'd')
		j = j + ft_putnbr(va_arg(arg, int));
	else if (t == 'u')
		j = j + ft_putnbr_base(va_arg(arg, int), "0123456789");
	else if (t == 'x')
		j = j + ft_putnbr_base(va_arg(arg, int), "0123456789abcdef");
	else if (t == 'X')
		j = j + ft_putnbr_base(va_arg(arg, int), "0123456789ABCDEF");
	else if (t == '%')
		j = ft_putchar('%');
	return (j);
}
