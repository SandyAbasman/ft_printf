/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandy <abasifrekesandy@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:52:23 by Asandy            #+#    #+#             */
/*   Updated: 2022/03/15 21:52:37 by asandy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 


int_printf(const char *s, ...)
{
    int len;
    int i;
    va_list args;

    len = 0;
    i = 0;
    va_start(args, s);
    while (s[i])
    {
        if (s[i] != '%')
            len += write (1, &s[i], 1);
        if (s[i] == '%')
        {
            len += ft_checker(s[i + 1], &args);
            i++;
        }
        i++;
    }
    va_end(args);
    return (len);
}