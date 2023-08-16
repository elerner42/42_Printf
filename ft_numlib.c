/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlib.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:02:03 by elerner           #+#    #+#             */
/*   Updated: 2023/08/16 10:42:35 by elerner          ###   ########.fr       */
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

int	ft_pointer(void *ptr)
{
	size_t	num;
	int		len;

	len = 0;
	num = (size_t)ptr;
	len = write(1, "0x", 2);
	len = len + ft_tohexa(num);
	return (len);
}
