/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeokwon <hyeokwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:45:28 by hyeokwon          #+#    #+#             */
/*   Updated: 2025/02/06 14:02:47 by hyeokwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		len;
	int		i;
	int		j;
	int		k;

	len = 0;
	i = -1;
	j = 0;
	k = 0;
	if (!size)
		return (malloc(1));
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
			len++;
		len += i < size - 1 ? (j = -1, while (sep[++j])) : 0;
	}
	if (!(res = malloc(len + 1)))
		return (NULL);
	i = -1;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
			res[k++] = strs[i][j];
		j = -1;
		while (sep[++j] && i < size - 1)
			res[k++] = sep[j];
	}
	res[k] = 0;
	return (res);
}
