/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 12:08:47 by szerisen          #+#    #+#             */
/*   Updated: 2021/07/03 12:40:50 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		index;

	index = 0;
	while (src[index])
		index++;
	if (size == 0)
		return (index);
	index = 0;
	while (src[index] && index < size - 1)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	index = 0;
	while (src[index])
		index++;
	return (index);
}
