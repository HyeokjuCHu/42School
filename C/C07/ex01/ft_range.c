/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeokwon <hyeokwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:35:34 by Hyeokwon          #+#    #+#             */
/*   Updated: 2025/02/06 13:46:44 by hyeokwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
