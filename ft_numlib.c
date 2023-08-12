/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlib.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:02:03 by elerner           #+#    #+#             */
/*   Updated: 2023/08/12 01:17:19 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	static int		i;
	long			nbr;

	nbr = (long long )n;
	i = 0;
	if (n < 0)
	{
		ft_putchar('-');
		nbr = nbr * (-1);
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
	i++;
	if (n < 0)
		i++;
	return (i);
}

int	ft_putnbr_base(unsigned int n, char *b)
{
	static int	i;
	size_t		nbr;

	nbr = (size_t)n;
	i = 0;
	if (nbr >= ft_strlen(b))
	{
		ft_putnbr_base(nbr / ft_strlen(b), b);
		nbr = nbr % ft_strlen(b);
	}
	i++;
	ft_putchar(b[nbr]);
	return (i);
}
