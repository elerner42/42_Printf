/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlib.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:33:11 by elerner           #+#    #+#             */
/*   Updated: 2023/08/25 12:05:02 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	if (!c)
		return (-1);
	write (1, &c, 1);
	return (1);
}

unsigned	int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_putstr(char *str)
{
	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
	write (1, str, ft_strlen(str));
	return (ft_strlen(str));
}
