/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 06:57:13 by elerner           #+#    #+#             */
/*   Updated: 2023/08/17 21:26:52 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		len;
	int		i;

	len = 0;
	i = 0;
	va_start(arg, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			len += ft_type(arg, str[i + 1]);
			i++;
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	return (0);
}
