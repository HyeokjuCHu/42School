/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hyeokwon <khj6330865@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 14:33:57 by Hyeokwon          #+#    #+#             */
/*   Updated: 2025/01/26 14:34:42 by Hyeokwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	char	*start;

	start = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (start);
}
