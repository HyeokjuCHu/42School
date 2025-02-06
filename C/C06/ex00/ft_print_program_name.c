/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hyeokwon <khj6330865@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 21:16:23 by Hyeokwon          #+#    #+#             */
/*   Updated: 2025/02/05 21:25:26 by Hyeokwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*prog_name;
	int		len;

	if (argc <= 1)
	{
		prog_name = argv[0];
		len = 0;
		while (prog_name[len])
			len++;
		write(1, prog_name, len);
		write(1, "\n", 1);
		return (0);
	}
}
