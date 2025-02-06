/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hyeokwon <khj6330865@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 21:35:58 by Hyeokwon          #+#    #+#             */
/*   Updated: 2025/02/05 10:45:45 by Hyeokwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		len;
	char	*param;

	i = 1;
	while (i < argc)
	{
		len = 0;
		param = argv[i];
		while (param[len])
			len++;
		write(1, param, len);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
