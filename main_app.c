/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_app.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 21:05:37 by elerner           #+#    #+#             */
/*   Updated: 2023/08/16 10:47:22 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int main(void)
{
   /* printf("PRUEBA FUNCION PUTCHAR! \n\n");
    
    printf("Prueba con caracteres ASCII:\n");
    ft_putchar('A');
    ft_putchar('a');
    ft_putchar('0');
    ft_putchar('.');
    printf("\n");

    printf("Prueba con caracteres no imprimibles:\n");
    ft_putchar('\n');
    ft_putchar('\t');
    printf("\n");

    printf("Prueba con valores fuera del rango de caracteres ASCII:\n");
    ft_putchar(200);
    ft_putchar(-1);
    printf("\n");

    printf("PRUEBA FUNCION PUTSTR!!!\n\n");

    printf("Prueba con cadenas de diferentes longitudes:\n");
    ft_putstr(" \n");
    ft_putstr("Hola\n");
    ft_putstr("Esta es una cadena larga");
    printf("\n");

    printf("Prueba con cadenas que contengan caracteres especiales:\n");
    ft_putstr("Hola\nMundo\n");
    ft_putstr("Hola\tMundo");
    printf("\n");

    printf("Prueba con cadenas que contengan caracteres no ASCII:\n");
    ft_putstr("¡Hola, mundo!\n");
    ft_putstr("こんにちは世界");
    printf("\n");*/
    /*
    printf("PRUBA FUNCION PUTNBR !!!\n");
    printf("Prueba con números positivos y negativos:\n");
    ft_putnbr(0);
    ft_putchar('\n');
    ft_putnbr(1);
    ft_putchar('\n');
    ft_putnbr(-1);
    ft_putchar('\n');
    ft_putnbr(123);
    ft_putchar('\n');
    ft_putnbr(-123);
    ft_putchar('\n');

    printf("Prueba con números grandes:\n");
    ft_putnbr(INT_MAX);
    ft_putchar('\n');
    ft_putnbr(INT_MIN);
    ft_putchar('\n');

    printf("Prueba con números que contengan ceros a la izquierda:\n");
    ft_putnbr(000012);
    ft_putchar('\n');
    ft_putnbr(-012);
    ft_putchar('\n');*/

    unsigned int n = 42;

    printf("Imprimiendo el número %u en diferentes bases:\n", n);

    printf("Base 2: ");
    ft_putnbr_base(n, "01");
    printf("\n");

    printf("Base 8: ");
    ft_putnbr_base(n, "01234567");
    printf("\n");

    printf("Base 10: ");
    ft_putnbr_base(n, "0123456789");
    printf("\n");

    printf("Base 16: ");
    ft_putnbr_base(n, "0123456789ABCDEF");
    printf("\n");

   printf("Test 1: ");
    ft_tohexa(0);
    printf("\n");

    printf("Test 2: ");
    ft_tohexa(10);
    printf("\n");

    printf("Test 3: ");
    ft_tohexa(255);
    printf("\n");

    printf("Test 4: ");
    ft_tohexa(4095);
    printf("\n");
    
    return ( 0 );
}
<<<<<<< HEAD
//gcc main_app.c -L. -lftprintf -o main
=======
>>>>>>> refs/remotes/origin/main
