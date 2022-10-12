/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 22:15:38 by dlima-se          #+#    #+#             */
/*   Updated: 2022/10/07 21:05:21 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		end;
	int		i;

	end = ft_strlen(s1) - 1;
	i = 0;
	//if (ft_strlen(set) == 0)
	//	return (ft_strdup((char *)s1));
	while (s1 && ft_strchr(set, s1[i]))
		i++;
	while (end >= 0 && ft_strchr(set, s1[end]))
		end--;
	//if ((end - i + 1) >= 0)
	return (ft_substr(s1, i, (end - i + 1)));
	//return ((ft_calloc(1, sizeof(char))));
}
