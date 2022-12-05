/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 03:26:31 by szerisen          #+#    #+#             */
/*   Updated: 2021/07/12 03:27:21 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		a;

	a = 0;
	while (src[a] && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

int		ft_issep(char c, char *charset)
{
	int		a;

	a = 0;
	while (charset[a])
	{
		if (c == charset[a])
			return (1);
		a++;
	}
	return (0);
}

char	*ft_get_next(char **pos, char *charset, int *next)
{
	int		a;
	char	*str_s;

	*next = 0;
	str_s = 0;
	a = 0;
	while ((*pos)[a])
	{
		if (ft_issep((*pos)[a], charset) && str_s != 0)
		{
			*pos = str_s + *next;
			return (str_s);
		}
		else if (!ft_issep((*pos)[a], charset) && str_s == 0)
			str_s = &(*pos)[a];
		if (!ft_issep((*pos)[a], charset))
			*next = *next + 1;
		a++;
	}
	*pos = str_s + *next;
	if (*next == 0)
		return (0);
	return (str_s);
}

char	**ft_buffer(char *str, char *charset)
{
	int		nb;
	char	**strs;
	int		next;
	char	*pos;

	nb = 0;
	next = 0;
	pos = str;
	while (ft_get_next(&pos, charset, &next))
		nb++;
	if (!(strs = (char **)malloc(sizeof(char *) * (nb + 1))))
		return (0);
	return (strs);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		next;
	char	*next_str;
	char	*pos;
	int		a;

	if (!(strs = ft_buffer(str, charset)))
		return (0);
	a = 0;
	pos = str;
	while ((next_str = ft_get_next(&pos, charset, &next)))
	{
		if (!(strs[a] = (char *)malloc(sizeof(char) * next + 1)))
			return (0);
		ft_strncpy(strs[a], next_str, next);
		a++;
	}
	strs[a] = 0;
	return (strs);
}
