/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hyeokwon <khj6330865@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 14:48:05 by Hyeokwon          #+#    #+#             */
/*   Updated: 2025/01/26 14:48:17 by Hyeokwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	char	*start;

	start = str;
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
	str++;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		if (*str >= 'a' && *str <= 'z')
		{
			if (!(*(str - 1) >= 'a' && *(str - 1) <= 'z')
				&& !(*(str - 1) >= '0' && *(str - 1) <= '9')
				&& !(*(str - 1) >= 'A' && *(str - 1) <= 'Z'))
			{
				*str -= 32;
			}
		}
		str++;
	}
	return (start);
}
