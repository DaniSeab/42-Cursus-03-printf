/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:30:03 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/28 21:59:04 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t n)
{
	size_t		i;

	i = 0;
	if (little[0] == '\0')
	{
		if (big)
			return ((char *)big);
		else
			return (0);
	}
	if (n == 0)
		return (0);
	while (big[i] != '\0' && i < n)
	{
		if (ft_strlen(little) <= n - i)
			if (ft_memcmp(&big[i], little, ft_strlen(little)) == 0)
				return ((char *)&big[i]);
		i++;
	}
	return (0);
}
