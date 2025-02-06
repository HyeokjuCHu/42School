/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hyeokwon <khj6330865@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 21:58:59 by Hyeokwon          #+#    #+#             */
/*   Updated: 2025/01/26 22:03:58 by Hyeokwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	i;

	d_len = 0;
	s_len = 0;
	i = 0;
	while (dest[d_len] && d_len < size)
		d_len++;
	while (src[s_len])
		s_len++;
	if (d_len >= size)
		return (size + s_len);
	while (src[i] && d_len + i + 1 < size)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (d_len + s_len);
}
