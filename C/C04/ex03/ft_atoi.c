/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hyeokwon <khj6330865@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 20:47:52 by Hyeokwon          #+#    #+#             */
/*   Updated: 2025/02/02 20:51:08 by Hyeokwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	minus_count;

	minus_count = 0;
	res = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus_count++;
		str++;
	}
	if (minus_count % 2 != 0)
		sign = -1;
	while (*str >= '0' && *str <= '9')
		res = res * 10 + (*str++ - '0');
	return (sign * res);
}
