/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 13:50:45 by szerisen          #+#    #+#             */
/*   Updated: 2021/07/09 21:44:40 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*buffer;
	int		a;

	if (min >= max)
		return (0);
	if (!(buffer = (int *)malloc(sizeof(int) * (max - min))))
		return (0);
	a = 0;
	while (min < max)
	{
		buffer[a] = min;
		a++;
		min++;
	}
	return (buffer);
}
