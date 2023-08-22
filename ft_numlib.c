/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlib.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:02:03 by elerner           #+#    #+#             */
/*   Updated: 2023/08/19 13:49:12 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	static int		i;
	long			nbr;

	i = 0;
	nbr = n;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * (-1);
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		nbr = nbr % 10;
	}
	i++;
	ft_putchar(nbr + '0');
	if (n < 0)
		i++;
	return (i);
}

int	ft_putnbr_base(unsigned int n, char *b)
{
	static int	i;
	size_t		num;

	num = (size_t)n;
	i = 0;
	if (num >= ft_strlen(b))
	{
		ft_putnbr_base(num / ft_strlen(b), b);
		num = num % ft_strlen(b);
	}
	i++;
	ft_putchar(b[num]);
	return (i);
}

int	ft_tohexa(unsigned long int num)
{
	static int	i;
	char		*b;

	i = 0;
	b = "0123456789abcdef";
	if (num >= 16)
	{
		ft_tohexa(num / 16);
		num = num % 16;
	}
	i++;
	ft_putchar(b[num]);
	return (i);
}

int	ft_ptr(void *ptr)
{
	size_t	num;
	long	len;

	len = 0;
	num = (size_t)ptr;
	len = write(1, "0x", 2);
	len = len + ft_tohexa(num);
	return (len);
}
