/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 21:59:18 by szerisen          #+#    #+#             */
/*   Updated: 2021/07/12 22:23:15 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

void	ft_swap(char **i, char **j)
{
	char *k;

	k = *i;
	*i = *j;
	*j = k;
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

void	ft_sort_string_tab(char **tab)
{
	int		a;
	int		size;
	int		check;

	size = 0;
	while (tab[size])
		size++;
	while (true)
	{
		a = 0;
		check = 0;
		while (a < size - 1)
		{
			if (ft_strcmp(tab[a], tab[a + 1]) > 0)
			{
				ft_swap(&tab[a], &tab[a + 1]);
				check = 1;
			}
			a++;
		}
		if (!check)
			break ;
	}
}
