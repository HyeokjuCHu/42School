/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeokwon <hyeokwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:35:34 by Hyeokwon          #+#    #+#             */
/*   Updated: 2025/02/10 13:40:03 by hyeokwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*arr;
	int	size;

	if (min >= max)
		return (NULL);
	size = max - min;
	arr = (int *)malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	j = 0;
	i = min;
	while (i < max)
	{
		arr[j] = i;
		i++;
		j++;
	}
	return (arr);
}
/*
int	main(void)
{
	int *range;
	int min = 3;
	int max = 8;
	int size;
	int i;

	range = ft_range(min, max);
	if (range == NULL)
	{
		printf("Empty range or memory allocation failed\n");
		return (1);
	}

	size = max - min;
	printf("Generated range: ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", range[i]);
	}
	printf("\n");

	free(range);
	return (0);
}*/