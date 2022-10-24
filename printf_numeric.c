/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_numeric.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 02:59:24 by dlima-se          #+#    #+#             */
/*   Updated: 2022/10/24 22:11:41 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
		ft_putstr("-2147483648");
	else if (d < 0)
	{
		ft_putchar('-');
		d *= -1;
	}
	if (d <= 9)
	{
		if (ft_isdigit(d + 48))
			len += ft_putchar(d + 48);
	}
	else
	{
		ft_putnbr(d / 10);
		len += ft_putchar((d % 10) + 48);
	}
	return (len + 1);
}

int	ft_puthexa(unsigned int x, int signal)
{
	char	string[25];
	char	*base_character;
	int		i;

	i = 0;
	if (signal == 0)
		base_character = "0123456789ABCDEF";
	else
		base_character = "0123456789abcdef";
	if (signal == 2)
	{
		if (x == 0)
		{
			ft_putstr("(null");
			return (i);
		}
		ft_putstr("0x");
	}
	if (x == 0)
	{
		ft_putchar('0');
		return (1);
	}
	while (x != 0)
	{
		string[i] = base_character[x % 16];
		x = x / 16;
		i++;
	}
	if (signal == 2)
		i += 2;
	return (i + 1);
}

int	ft_putunbr(unsigned int u)
{
	int	len;

	len = 0;
	if (u >= 10)
		ft_putunbr(u / 10);
	len *= ft_putchar(u % 10 + '0');
	return (len + 1);
}
