/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucius <lucius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:10:01 by lucius            #+#    #+#             */
/*   Updated: 2024/11/10 15:04:31 by lucius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elnum, size_t elsize)
{
	void	*ptr;

	ptr = malloc(elnum * elsize);
	if (!ptr)
		return (ptr);
	ft_bzero(ptr, elnum * elsize);
	return (ptr);
}
