/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 21:41:27 by dlima-se          #+#    #+#             */
/*   Updated: 2022/10/04 00:46:23 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t    i;
    char    *str;
    
	if (start >= ft_strlen(s))
	{
		str = ft_calloc(1, 1);
		return (str);
	}
	if (len + (size_t)start > ft_strlen(s))
		len = ft_strlen(s) - (size_t)start;
    i = 0;
    str = (char *)ft_calloc(len + 1, sizeof(char));
    if (!str)
        return (NULL);
    while (i < len)
    {
        str[i] = s[start + i];
        i++;
    }
    return (str);
} 


// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*res;
// 	size_t	i;

// 	i = 0;
// 	if (start >= ft_strlen(s))
// 	{
// 		res = ft_calloc(1, 1);
// 		return (res);
// 	}
// 	if ((len + (size_t)start) > ft_strlen(s))
// 		len = ft_strlen(s) - (size_t)start;
// 	res = ft_calloc(len + 1, sizeof(char));
// 	if (!res)
// 		return (0);
// 	while (i < len)
// 	{
// 		res[i] = s[i + start];
// 		i++;
// 	}
// 	return (res);
// }
