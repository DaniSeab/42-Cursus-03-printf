/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 00:39:05 by dlima-se          #+#    #+#             */
/*   Updated: 2022/10/18 03:20:56 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_specified(va_list args, char specifier)
{
	int	sub_print_len;
	
	sub_print_len = 0;
	if (specifier == 'i' || specifier == 'd')
		sub_print_len += ft_putnbr(va_arg(args, int));
	else if (specifier == 'c')
		sub_print_len += ft_putchar(va_arg(args, int));
	else if (specifier == 's')
		sub_print_len += ft_putstr(va_arg(args, char*));
	else if (specifier == 'u')
		sub_print_len += ft_putunbr(va_arg(args, unsigned int));
	else if (specifier == 'p')
		sub_print_len += ft_puthexa(va_arg(args, unsigned int), 2);
	else if (specifier == 'x')
		sub_print_len += ft_puthexa(va_arg(args, unsigned int), 0);
	else if (specifier == 'X')
		sub_print_len += ft_puthexa(va_arg(args, unsigned int), 1);
	else if (specifier == '%')
		sub_print_len += ft_putchar('%');
	return (sub_print_len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		print_len;

	print_len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			print_len += print_specified(args, *++format);
		else if (*format != '\0')
			print_len += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (print_len);
}
