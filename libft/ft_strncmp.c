/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:29:57 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/26 21:56:58 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	if (len > ft_strlen(s1))
	{
		if (ft_strlen(s1) > ft_strlen(s2))
			return (ft_memcmp(s1, s2, ft_strlen(s2) + 1));
		return (ft_memcmp(s1, s2, ft_strlen(s1) + 1));
	}
	else if (len > ft_strlen(s2))
	{
		if (ft_strlen(s2) > ft_strlen(s1))
			return (ft_memcmp(s1, s2, ft_strlen(s1) + 1));
		return (ft_memcmp(s1, s2, ft_strlen(s2) + 1));
	}
	return (ft_memcmp(s1, s2, len));
}
