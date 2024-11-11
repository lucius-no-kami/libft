/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucius <lucius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:25:29 by lucius            #+#    #+#             */
/*   Updated: 2024/11/11 17:26:19 by lucius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**fsplit(char **split, size_t j)
{
	while (j > 0)
		free(split[--j]);
	free(split);
	return (NULL);
}

static size_t	segcount(char const *s, char c)
{
	size_t	i;
	size_t	segnum;

	i = 0;
	segnum = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			segnum++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (segnum);
}

char	**spliter(char **split, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			split[j] = ft_substr(s, start, i - start);
			if (!split[j])
				return (fsplit(split, j));
			j++;
		}
	}
	split[j] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	size_t	segnum;
	char	**splited;

	if (!s)
		return (NULL);
	segnum = segcount(s, c);
	splited = (char **)malloc((segnum + 1) * sizeof(char *));
	if (!splited)
		return (NULL);
	spliter(splited, s, c);
	return (splited);
}
