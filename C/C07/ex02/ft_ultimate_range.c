/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeokwon <hyeokwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:51:08 by Hyeokwon          #+#    #+#             */
/*   Updated: 2025/02/10 13:40:04 by hyeokwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*arr;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
	{
		*range = NULL;
		return (-1);
	}	
	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}	
	*range = arr;
	return (size);
}
/*

int	main(void)
{
	int *range;
	int min = 5;
	int max = 10;
	int size;
	int i;

	size = ft_ultimate_range(&range, min, max);
	if (size == -1)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	else if (size == 0)
	{
		printf("Empty range\n");
		return (0);
	}

	printf("Generated range: ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", range[i]);
	}
	printf("\n");

	free(range);
	return (0);
}
*/