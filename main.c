/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucius <lucius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:52:21 by lucius            #+#    #+#             */
/*   Updated: 2024/11/07 22:05:41 by lucius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	main(int ac, char **av)
{
	int	i = 0;
	int	ft_isresult;
	int isresult;
	char result[250];
	char ft_result[250];
	
	
	/* isalpha */
	printf("-------- isalpha --------\n[char | isalpha | yours]\n");
	while (i < ac)
	{
		isresult = isalpha(av[i][0]);
		ft_isresult = ft_isalpha(av[i][0]);
		if (isresult == ft_isresult)
			printf("G\n");
		else
			printf("[%c | %d | %d]\n", av[i][0], isresult, ft_isresult);
		i++;
	}
	i = 0;

	/* isdigit */
	printf("-------- isdigit --------\n[char | isdigit | yours]\n");
	while (i < ac)
	{
		isresult = isdigit(av[i][0]);
		ft_isresult = ft_isdigit(av[i][0]);
		if (isresult == ft_isresult)
			printf("G\n");
		else
			printf("[%c | %d | %d]\n", av[i][0], isresult, ft_isresult);
		i++;
	}
	i = 0;

	/* isalnum */
	printf("-------- isalnum --------\n[char | isalnum | yours]\n");
	while (i < ac)
	{
		isresult = isalnum(av[i][0]);
		ft_isresult = ft_isalnum(av[i][0]);
		if (isresult == ft_isresult)
			printf("G\n");
		else
			printf("[%c | %d | %d]\n", av[i][0], isresult, ft_isresult);
		i++;
	}
	i = 0;

	/* isascii */
	printf("-------- isascii --------\n[char | isascii | yours]\n");
	while (i < ac)
	{
		isresult = isascii(av[i][0]);
		ft_isresult = ft_isascii(av[i][0]);
		if (isresult == ft_isresult)
			printf("G\n");
		else
			printf("[%c | %d | %d]\n", av[i][0], isresult, ft_isresult);
		i++;
	}
	i = 0;

	/* isprint */
	printf("-------- isprint --------\n[char | isprint | yours]\n");
	while (i < ac)
	{
		isresult = isprint(av[i][0]);
		ft_isresult = ft_isprint(av[i][0]);
		if (isresult == ft_isresult)
			printf("G\n");
		else
			printf("[%c | %d | %d]\n", av[i][0], isresult, ft_isresult);
		i++;
	}
	i = 0;

	/* isprint */
	printf("-------- strlen --------\n[string | strlen | yours]\n");
	while (i < ac)
	{
		isresult = strlen(av[i]);
		ft_isresult = ft_strlen(av[i]);
		if (isresult == ft_isresult)
			printf("G\n");
		else
			printf("[%s | %d | %d]\n", av[i], isresult, ft_isresult);
		i++;
	}
	i = 0;

	/* memset */
	printf("-------- memset --------\n[string | memset | yours]\n");
	while (i < ac)
	{
		memset(result, av[i][0], 10);
		ft_memset(ft_result, av[i][0], 10);
		if (!strncmp(result, ft_result, 10))
			printf("G\n");
		else
			printf("[%c | %s | %s]\n", 'c', result, ft_result);
		i++;
	}
	i = 0;

	/* bzero */
	printf("-------- bzero --------\n[string | bzero | yours]\n");
	while (i < ac)
	{
		bzero(result, 10);
		ft_bzero(ft_result, 10);
		if (!strncmp(result, ft_result, 10))
			printf("G\n");
		else
			printf("[%c | %s | %s]\n", 'c', result, ft_result);
		i++;
	}
	i = 0;

	/* memcpy */
	printf("-------- memcpy --------\n[string | memcpy | yours]\n");
	while (i < ac)
	{
		memcpy(result, av[i], 5);
		ft_memcpy(ft_result, av[i], 5);
		if (!strncmp(result, ft_result, 5))
			printf("G\n");
		else
			printf("[%c | %s | %s]\n", 'c', result, ft_result);
		i++;
	}
	i = 0;

	/* memmove */
	printf("-------- memmove --------\n[string | memmove | yours]\n");
	while (i < ac)
	{
		memmove(result, av[i], 5);
		ft_memmove(ft_result, av[i], 5);
		if (!strncmp(result, ft_result, 5))
			printf("G\n");
		else
			printf("[%c | %s | %s]\n", 'c', result, ft_result);
		i++;
	}
	i = 0;

	/* strlcpy */
	printf("-------- strlcpy --------\n[string | strlcpy | yours]\n");
	while (i < ac)
	{
		strlcpy(result, av[i], 5);
		ft_strlcpy(ft_result, av[i], 5);
		if (!strncmp(result, ft_result, 5))
			printf("G\n");
		else
			printf("[%c | %s | %s]\n", 'c', result, ft_result);
		i++;
	}
	i = 0;

	/* strlcat */
	printf("-------- strlcat --------\n[string | strlcat | yours]\n");
	while (i < ac)
	{
		strlcat(result, av[i], 5);
		ft_strlcat(ft_result, av[i], 5);
		if (!strncmp(result, ft_result, 5))
			printf("G\n");
		else
			printf("[%c | %s | %s]\n", 'c', result, ft_result);
		i++;
	}
	i = 0;

	return (0);
}
