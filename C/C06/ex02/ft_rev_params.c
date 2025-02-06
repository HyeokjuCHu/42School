/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hyeokwon <khj6330865@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 22:05:06 by Hyeokwon          #+#    #+#             */
/*   Updated: 2025/02/04 21:55:45 by Hyeokwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		len;
	char	*param;

	i = argc - 1;
	while (i >= 1)
	{
		len = 0;
		param = argv[i];
		while (param[len])
			len++;
		write(1, param, len);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
