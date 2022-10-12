/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:30:08 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/28 00:02:33 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	const char	*start;
	char		c;

	c = (char)ch;
	start = str;
	str += ft_strlen(str);
	while (str != start && *str != c)
		str--;
	if (*str == c)
		return ((char *)str);
	return (0);
}
