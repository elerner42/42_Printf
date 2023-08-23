/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_app.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 21:05:37 by elerner           #+#    #+#             */
/*   Updated: 2023/08/23 19:03:36 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <assert.h>

int main(void)
{
    int len;
    char c;
    char *s;
    
    c = 'a';
    s = "cadena de caracteres";

    printf("CHAR------------\n");
    len = printf("%c : ", c);    //Original
    printf("Len: %i\n",len);
    len = ft_printf("%c : ", c); //Mi función
    printf("Len: %i\n",len);
    printf("----------------\n");

    printf("STR------------\n");
    len = printf("%s : ", s);    //Original
    printf("Len: %i\n",len);
    len = ft_printf("%s : ", s); //Mi función
    printf("Len: %i\n",len);
    printf("----------------\n");

    printf("PTR------------\n");
    len = printf("%p : ", &len);    //Original
    printf("Len: %i\n",len);
    len = ft_printf("%p : ", &len); //Mi función
    printf("Len: %i\n",len);
    printf("----------------\n");

    printf("INT i------------\n");
    len = printf("%i : ", 42);    //Original
    printf("Len: %i\n",len);
    len = ft_printf("%i : ", 42); //Mi función
    printf("Len: %i\n",len);
    printf("----------------\n");

    printf("INT u------------\n");
    len = printf("%u : ", 43);    //Original
    printf("Len: %i\n",len);
    len = ft_printf("%u : ", 43); //Mi función
    printf("Len: %i\n",len);
    printf("----------------\n");

    printf("hex x------------\n");
    len = printf("%x : ", 111);    //Original
    printf("Len: %i\n",len);
    len = ft_printf("%x : ", 111); //Mi función
    printf("Len: %i\n",len);
    printf("----------------\n");

    printf("HEX X------------\n");
    len = printf("%X : ", 111);    //Original
    printf("Len: %i\n",len);
    len = ft_printf("%X : ", 111); //Mi función
    printf("Len: %i\n",len);
    printf("----------------\n");
 
    printf("PERCENT------------\n");
    len = printf("%");    //Original
    printf("Len: %i\n",len);
    len = ft_printf("%"); //Mi función
    printf("Len: %i\n",len);
    printf("----------------\n");
/*
   
    len = ft_printf("El número %u es un flotante.\n", 3);
    printf("Len: %i",len);

    len = ft_printf(" %p %p ", &a, 0);
    printf("Len: %i",len);
    
    len = printf(" %p %p ", 0, 0);

    printf("len: %d\n", len); 

    int a;

    //int b = printf("%p\n", 0);
    int c = ft_printf("%p\n", 0);

    //printf("len: %d\n", b);
    ft_printf("len: %d\n", c);

    //len2 = printf(" %p %p ", 0x0, 0x0);
    //printf("%i", len2);
    */
    return ( 0 );
}
//gcc main_app.c -L. -lftprintf -o main
