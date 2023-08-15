/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 06:57:44 by elerner           #+#    #+#             */
/*   Updated: 2023/08/15 20:14:06 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int             ft_putchar(int c);
unsigned int    ft_strlen(char *str);
int             ft_putstr(char *str);
int             ft_putnbr(int n);
int             ft_putnbr_base(unsigned n, char *b);

#endif