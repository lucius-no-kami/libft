/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucius <lucius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:27:59 by lucius            #+#    #+#             */
/*   Updated: 2024/11/08 19:32:27 by lucius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*dup;

	s_len = ft_strlen(s) + 1;
	dup = (char *)ft_calloc(s_len, sizeof(char));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, s_len);
	return (dup);
}
