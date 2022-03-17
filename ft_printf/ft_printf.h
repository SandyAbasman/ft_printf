/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandy <abasifrekesandy@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 20:36:21 by asandy            #+#    #+#             */
/*   Updated: 2022/03/17 21:34:46 by asandy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	print_number(int nb);
int	print_char(char c);
int	ft_checker(char c, va_list *ptr);
int	ft_printf(const char *s, ...);
int	print_address(unsigned long int nb);
int	print_unb(unsigned int nb);
int	print_hex(unsigned int nb, int s);
int	print_str(char	*str);

#endif
