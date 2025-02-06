/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeokwon <hyeokwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:51:08 by Hyeokwon          #+#    #+#             */
/*   Updated: 2025/02/06 13:46:42 by hyeokwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
	if (arr == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	*range = arr;
	return (size);
}
