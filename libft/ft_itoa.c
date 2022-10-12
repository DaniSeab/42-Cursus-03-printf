/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 03:27:23 by dlima-se          #+#    #+#             */
/*   Updated: 2022/10/07 17:18:00 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	buffer[INT_DIGITS_BUFFER_SIZE];
	char	*res;
	int		isnegative;

	res = buffer + INT_DIGITS_BUFFER_SIZE;
	*--res = '\0';
	isnegative = 0;
	if (n < 0)
		isnegative = 1;
	if (n == 0)
		*--res = '0';
	while (n != 0)
	{
		if (n > 0)
			*--res = 48 + (n % 10);
		else
			*--res = 48 - (n % 10);
		n /= 10;
	}
	if (isnegative == 1)
		*--res = '-';
	return (ft_strdup(res));
}
