/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_numeric.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 02:59:24 by dlima-se          #+#    #+#             */
/*   Updated: 2022/10/26 02:16:38 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_isdigit(int ch)
{
	if (!(ch >= 48 && ch <= 57))
		return (0);
	return (1);
}

int	ft_putnbr(int d)
{
	int	len;

	len = 0;
	if (d == -2147483648)
	{
		len += ft_putstr("-2147483648");
		return (len);
	}
	else if (d < 0)
	{
		len += ft_putchar('-');
		d *= -1;
	}
	if (d <= 9)
	{
		if (ft_isdigit(d + 48))
			len += ft_putchar(d + 48);
	}
	else
	{
		len += ft_putnbr(d / 10);
		len += ft_putchar((d % 10) + 48);
	}
	return (len);
}

int	ft_puthexa(unsigned int x, int signal)
{
	char	*base_character;
	int		i;

	i = 0;
	if (signal == 0)
		base_character = "0123456789abcdef";
	else
		base_character = "0123456789ABCDEF";
	if (x < 16)
		return (ft_putchar(base_character[x]));
	i += ft_puthexa(x / 16, signal);
	i += ft_putchar(base_character[x % 16]);
	return (i);
}

int	ft_putunbr(unsigned int u)
{
	int		len;

	len = 0;
	if (u >= 10)
		len += ft_putunbr(u / 10);
	len += ft_putchar(u % 10 + '0');
	return (len);
}

int	ft_putptr(unsigned long ptr)
{
	char	*base_character;
	int		i;

	i = 0;
	base_character = "0123456789abcdef";
	if (!ptr)
		return (ft_putstr(SYS_NIL));
	if (ptr < 16)
	{
		i += ft_putstr("0x");
		i += ft_putchar(base_character[ptr]);
		return (i);
	}
	i += ft_putptr(ptr / 16);
	i += ft_putchar(base_character[ptr % 16]);
	return (i);
}
