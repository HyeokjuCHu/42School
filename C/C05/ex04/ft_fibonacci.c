/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hyeokwon <khj6330865@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:06:43 by Hyeokwon          #+#    #+#             */
/*   Updated: 2025/01/28 16:15:36 by Hyeokwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index <= 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index -2));
}
