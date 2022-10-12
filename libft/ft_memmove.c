/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:29:20 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/26 19:37:28 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t		i;

	if (!src || !dest || len == 0)
		return (dest);
	i = len - 1;
	if (dest < src)
		return (ft_memcpy(dest, src, len));
	while (i > 0)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i--;
	}
	((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	return (dest);
}
