/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucius <lucius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:24:08 by lucius            #+#    #+#             */
/*   Updated: 2024/11/07 20:17:18 by lucius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;

	i = -1;
	if (dest == src || n == 0)
		return (dest);
	if (dest > src)
	{
		while (n-- > 0)
			*(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
	}
	else
	{
		while (++i < n)
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
	}
	return (dest);
}
