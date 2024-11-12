/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:01:59 by luluzuri          #+#    #+#             */
/*   Updated: 2024/11/12 13:39:44 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>

int	main(int ac, char **av)
{
	int		i;
	int		ft_is_result;
	int		is_result;
	char	buff[250];
	char	ft_buff[250];

	/* isalpha */
	printf("-------- isalpha --------\n[char | isalpha | yours]\n");
	i = 0;
	ft_is_result = 0;
	is_result = 0;
	while (i < ac)
	{
		ft_is_result = ft_isalpha(av[i][0]);
		is_result = isalpha(av[i][0]);
		if ((ft_is_result > 0 && is_result > 0) || (!ft_is_result && !is_result))
			printf("G\n");
		else
			printf("[%c | %d | %d]\n", av[i][0], is_result, ft_is_result);
		i++;
	}
	printf("------ fin isalpha ------\n\n");

	/* isdigit */
	printf("-------- isdigit --------\n[char | isdigit | yours]\n");
	i = 0;
	ft_is_result = 0;
	is_result = 0;
	while (i < ac)
	{
		ft_is_result = ft_isdigit(av[i][0]);
		is_result = isdigit(av[i][0]);
		if ((ft_is_result > 0 && is_result > 0) || (!ft_is_result && !is_result))
			printf("G\n");
		else
			printf("[%c | %d | %d]\n", av[i][0], is_result, ft_is_result);
		i++;
	}
	printf("------ fin isdigit ------\n\n");

	/* isalnum */
	printf("-------- isalnum --------\n[char | isalnum | yours]\n");
	i = 0;
	ft_is_result = 0;
	is_result = 0;
	while (i < ac)
	{
		ft_is_result = ft_isalnum(av[i][0]);
		is_result = isalnum(av[i][0]);
		if ((ft_is_result > 0 && is_result > 0) || (!ft_is_result && !is_result))
			printf("G\n");
		else
			printf("[%c | %d | %d]\n", av[i][0], is_result, ft_is_result);
		i++;
	}
	printf("------ fin isalnum ------\n\n");

	/* isascii */
	printf("-------- isascii --------\n[char | isascii | yours]\n");
	i = 0;
	ft_is_result = 0;
	is_result = 0;
	while (i < ac)
	{
		ft_is_result = ft_isascii(av[i][0]);
		is_result = isascii(av[i][0]);
		if ((ft_is_result > 0 && is_result > 0) || (!ft_is_result && !is_result))
			printf("G\n");
		else
			printf("[%c | %d | %d]\n", av[i][0], is_result, ft_is_result);
		i++;
	}
	printf("------ fin isascii ------\n\n");

	/* isprint */
	printf("-------- isprint --------\n[char | isprint | yours]\n");
	i = 0;
	ft_is_result = 0;
	is_result = 0;
	while (i < ac)
	{
		ft_is_result = ft_isprint(av[i][0]);
		is_result = isprint(av[i][0]);
		if ((ft_is_result > 0 && is_result > 0) || (!ft_is_result && !is_result))
			printf("G\n");
		else
			printf("[%c | %d | %d]\n", av[i][0], is_result, ft_is_result);
		i++;
	}
	printf("------ fin isprint ------\n\n");

	/* strlen */
	printf("-------- strlen --------\n[char | strlen | yours]\n");
	i = 0;
	ft_is_result = 0;
	is_result = 0;
	while (i < ac)
	{
		ft_is_result = ft_strlen(av[i]);
		is_result = strlen(av[i]);
		if (ft_is_result == is_result)
			printf("G\n");
		else
			printf("[%c | %d | %d]\n", av[i][0], is_result, ft_is_result);
		i++;
	}
	printf("------ fin strlen ------\n\n");

	/* memset */
	printf("-------- memset --------\n[char | memset | yours]\n");
	i = 0;
	ft_is_result = 0;
	is_result = 0;
	while (i < ac)
	{
		ft_memset(ft_buff, 's', 10);
		memset(buff, 's', 10);
		if (!ft_strncmp(ft_buff, buff, 10))
			printf("G\n");
		else
			printf("[%c | %s | %s]\n", 's', buff, ft_buff);
		i++;
	}
	printf("------ fin memset ------\n\n");

	/* bzero */
	printf("-------- bzero --------\n[char | bzero | yours]\n");
	i = 0;
	ft_is_result = 0;
	is_result = 0;
	while (i < ac)
	{
		ft_bzero(ft_buff, 10);
		bzero(buff, 10);
		if (!ft_strncmp(ft_buff, buff, 10))
			printf("G\n");
		else
			printf("[%c | %s | %s]\n", 's', buff, ft_buff);
		i++;
	}
	printf("------ fin bzero ------\n\n");

	/* memcpy */
	printf("-------- memcpy --------\n[char | memcpy | yours]\n");
	i = 0;
	ft_is_result = 0;
	is_result = 0;
	while (i < ac)
	{
		ft_memcpy(ft_buff, av[i], ft_strlen(av[i]));
		memcpy(buff, av[i], ft_strlen(av[i]));
		if (!ft_strncmp(ft_buff, buff, 10))
			printf("G\n");
		else
			printf("[%c | %s | %s]\n", 's', buff, ft_buff);
		i++;
	}
	printf("------ fin memcpy ------\n\n");

	/* memmove */
	printf("-------- memmove --------\n[char | memmove | yours]\n");
	i = 0;
	ft_is_result = 0;
	is_result = 0;
	while (i < ac)
	{
		ft_memmove(ft_buff, av[i], ft_strlen(av[i]));
		memmove(buff, av[i], ft_strlen(av[i]));
		if (!ft_strncmp(ft_buff, buff, ft_strlen(av[i])))
			printf("G\n");
		else
			printf("[%c | %s | %s]\n", 's', buff, ft_buff);
		i++;
	}
	printf("------ fin memmove ------\n\n");
	return (0);
}
