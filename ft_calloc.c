/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucius <lucius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:38:34 by lucius            #+#    #+#             */
/*   Updated: 2024/11/08 19:23:50 by lucius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elnum, size_t elsize)
{
	void	*dst;

	dst = malloc(elnum * elsize);
	if (!dst)
		return (NULL);
	ft_bzero(dst, elnum * elsize);
	return (dst);
}
