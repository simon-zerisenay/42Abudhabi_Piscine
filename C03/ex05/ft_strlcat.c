/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:38:13 by szerisen          #+#    #+#             */
/*   Updated: 2021/07/14 19:21:26 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*dst;
	char			*src_start;
	unsigned int	dst_length;
	unsigned int	available;

	dst = dest;
	src_start = src;
	available = size;
	while (available-- != 0 && *dst != '\0')
		dst++;
	dst_length = dst - dest;
	available = size - dst_length;
	if (available == 0)
		return (dst_length + ft_strlen(src));
	while (*src != '\0')
	{
		if (available > 1)
		{
			*dst++ = *src;
			available--;
		}
		src++;
	}
	*dst = '\0';
	return (dst_length + (src - src_start));
}
