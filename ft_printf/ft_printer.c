/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandy <abasifrekesandy@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 20:08:45 by asandy            #+#    #+#             */
/*   Updated: 2022/03/17 21:50:28 by asandy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_numbers(int nb)
{
    long long   n;
    int         len;
    
    n = nb;
    len = 0;
    if (n < 0)
    {
        len += write(1, "-", 1);
        n *= -1;
    }
    if (n >= 10)
    {
        len += print_number(n / 10);
        len += print_numbers(n % 10);
    }
    if (n < 10 )
        len += print_char(n + 48);
    return (len);
}

int print_address(unsigned long int nb)
{
    int len;

    len = 0;
    if (nb >= 16)
    {
        len += print_address(nb / 16);
        len += print_address(nb % 16);
    }
    if (nb < 16)
    {
        if (nb < 10)
            len += print_char(nb + 48);
        else
            len += print_char(nb + 87);
    }
    return (len);
}

int print_unb( unsigned int nb)
{
    int len;
    
    len = 0;
    if (nb >= 10)
    {
        len += print_unb(nb / 10);
        len += print_unb(nb % 10);
    }
    if (nb < 10)
        len += print_char(nb + 48);
    return (len);
}

int print_hex(unsigned int nb, int s)
{
    int len;
    
    len = 0;
    if (nb >= 16)
    {
        len += print_hex(nb / 16, s);
        len += print_hex(nb % 16, s);
    }
    if (nb < 16)
    {
        if (nb < 10)
            len += print_char(nb + 48);
            else
            {
                if ( s == 1)
                    len += print_char(nb + 87);
                else
                    len += print_char(nb + 55);
            }
    }
    return (len);
}

int print_str(char  *str)
{
    int len;
    
    len = 0;
    if (!str)
        str = "(null)";
    while (*str)
        len += write(1, str++, 1);
    return (len);
}

int print_char(char c)
{
    int len;
    
    len = write(1, &c, 1);
    return (len);
}

