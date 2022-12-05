/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 15:09:43 by szerisen          #+#    #+#             */
/*   Updated: 2021/07/14 18:40:46 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		a;
	int		b;
	int		c;

	s = malloc(sizeof(strs));
	a = 0;
	c = 0;
	while (a < size)
	{
		b = 0;
		while (strs[a][b] != '\0')
		{
			s[c++] = strs[a][b++];
		}
		b = 0;
		while (sep[b] != '\0' && a != size - 1)
		{
			s[c++] = sep[b++];
		}
		a++;
	}
	s[c] = '\0';
	return (s);
}
