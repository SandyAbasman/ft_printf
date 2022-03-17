/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandy <abasifrekesandy@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:52:23 by Asandy            #+#    #+#             */
/*   Updated: 2022/03/17 22:34:23 by asandy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_checker(char c, va_list *ptr)
{
    int len;
    
    len = 0;
    if (c == 'c')
        len += print_char(va_arg(*ptr, int));
    if (c == '%')
        len += write(1, "%", 1);
    if (c == 'd' || c == 'i')
        len += print_number(va_arg(*ptr, int));
    if (c == 'u')
        len += print_unb(va_arg(*ptr, unsigned int));
    if (c == 'x')
        len += print_hex(va_arg(*ptr, unsigned int), 1);
    if (c == 'X')
        len += print_hex(va_arg(*ptr, unsigned int), 2);
    if (c == 'p')
    {
        len += write(1, "0x", 2);
        len += print_address(va_arg(*ptr, unsigned long int));
    }
    if (c == 's')
        len += print_str (va_arg(*ptr, char *));
    return (len); 
}

int ft_printf(const char *s, ...)
{
    int len;
    int i;
    va_list ptr;

    len = 0;
    i = 0;
    va_start(ptr, s);
    while (s[i])
    {
        if (s[i] != '%')
            len += write (1, &s[i], 1);
        if (s[i] == '%')
        {
            len += ft_checker(s[i + 1], &ptr);
            i++;
        }
        i++;
    }
    va_end(ptr);
    return (len);
}

#include <stdio.h>

int main ()
{
    int d = 100;

    ft_printf("%%", NULL);
    printf("%%", NULL);


    return (0);
}