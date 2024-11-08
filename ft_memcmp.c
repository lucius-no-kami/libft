/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucius <lucius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:57:32 by lucius            #+#    #+#             */
/*   Updated: 2024/11/08 15:14:38 by lucius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1p;
	const unsigned char	*s2p;

	i = 0;
	s1p = s1;
	s2p = s2;
	if (n == 0)
		return (0);
	while (n--)
	{
		if (*(s1p + i) != *(s2p + i))
			return (*(s1p + i) - *(s2p + i));
		i++;
	}
	return (0);
}
