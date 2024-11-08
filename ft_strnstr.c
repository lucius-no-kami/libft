/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucius <lucius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:18:41 by lucius            #+#    #+#             */
/*   Updated: 2024/11/08 16:24:30 by lucius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_n;
	size_t	len_h;

	len_n = ft_strlen(needle);
	len_h = ft_strlen(haystack);
	if (!len_n)
		return ((char *)haystack);
	if (len_h < len)
		len = len_h;
	while (len >= len_n)
	{
		if (!ft_strncmp(haystack, needle, len_n))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
