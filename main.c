/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 21:05:37 by elerner           #+#    #+#             */
/*   Updated: 2023/08/19 13:41:58 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <assert.h>

int main(void)
{
    int len;

    len = ft_printf("Hola, mundo!\n");

    len = ft_printf("%c \n", '5');
   
    len = ft_printf("El número %u es un flotante.\n", 3);
   
    len = ft_printf("%p %p\n", 0, 0);
    
    ft_printf("El número %u es un flotante.\n", 3);
    
    len = printf("%d\n", len);
    printf("%d \n", len);    
    return ( 0 );
}
//gcc main_app.c -L. -lftprintf -o main
