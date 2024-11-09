/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucius <lucius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:19:39 by lucius            #+#    #+#             */
/*   Updated: 2024/11/09 11:51:40 by lucius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t csize)
{
	size_t	slen;

	slen = ft_strlen(src);
	if (csize == 0)
		return (slen);
	if (csize > slen)
		csize = slen + 1;
	ft_memcpy(dst, src, csize - 1);
	dst[csize - 1] = '\0';
	return (slen);
}
