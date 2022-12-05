/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:38:11 by szerisen          #+#    #+#             */
/*   Updated: 2021/07/09 22:01:16 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char				*ft_strdup(char *src)
{
	char	*dest;
	int		length;
	int		a;

	length = 0;
	while (src[length])
		length++;
	if (!(dest = (char *)malloc(sizeof(char) * length + 1)))
		return (NULL);
	a = 0;
	while (src[a])
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

int					ft_strlen(char *str)
{
	int		a;

	a = 0;
	while (str[a])
	{
		a++;
	}
	return (a);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*buffer;
	int				a;

	if (!(buffer = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	a = 0;
	while (av[a] != 0 && a < ac)
	{
		buffer[a].size = ft_strlen(av[a]);
		buffer[a].str = av[a];
		buffer[a].copy = ft_strdup(av[a]);
		a++;
	}
	buffer[a].size = 0;
	buffer[a].str = 0;
	buffer[a].copy = 0;
	return (buffer);
}
