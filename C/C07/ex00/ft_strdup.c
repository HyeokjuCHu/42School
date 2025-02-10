/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeokwon <hyeokwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 22:33:57 by Hyeokwon          #+#    #+#             */
/*   Updated: 2025/02/10 13:40:43 by hyeokwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		len;
	int		i;

	len = 0;
	while (src[len])
		len++;
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int	main(void)
{
	char *src = "Hello, World!";
	char *dup;

	dup = ft_strdup(src);
	if (dup == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}

	printf("Original string: %s\n", src);
	printf("Duplicated string: %s\n", dup);

	free(dup);
	return (0);
}*/