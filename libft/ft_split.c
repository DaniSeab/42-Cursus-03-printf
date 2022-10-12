/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 03:22:52 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/29 23:18:14 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**empty_fill(int sig, const char *s)
{
	char	**res;

	if (sig == 1)
	{
		res = malloc(sizeof(char **) * 1);
		if (!res)
			return (0);
		res[0] = NULL;
	}
	if (sig == 2)
	{
		res = malloc(sizeof(char **) * 2);
		res[0] = ft_strdup((char *)s);
		res[1] = NULL;
	}
	return (res);
}

static void	free_all(char **res, int j)
{
	while (j)
		free(res[j--]);
}

static int	word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static int	create_words(char const *s, char c, char **res)
{
	int		i;
	int		j;

	j = 0;
	while (*s)
	{
		i = 0;
		while (s[i] != c && s[i] != '\0')
		{
			if ((s[i + 1] == c || s[i + 1] == '\0'))
			{
				res[j] = ft_substr(s, 0, i + 1);
				if (!res[j])
					return (j);
				j++;
			}
			i++;
		}
		if (s[i] != '\0')
			i++;
		s += i;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**res;
	int		test;

	if (!*s)
		return (empty_fill(1, s));
	if (!c)
		return (empty_fill(2, s));
	count = (word_count(s, c));
	if (count <= 0)
		return (empty_fill(1, s));
	res = (char **)ft_calloc(count + 1, sizeof(char *));
	test = create_words(s, c, res);
	if (test == 0)
		return (res);
	else
	{
		free_all(res, test);
		free(res);
		return (0);
	}
}
