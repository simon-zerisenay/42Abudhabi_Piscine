/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 13:13:46 by szerisen          #+#    #+#             */
/*   Updated: 2021/07/07 13:14:21 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char *holder;

	holder = str;
	while (*holder != 0)
	{
		write(1, holder, 1);
		holder++;
	}
	write(1, "\n", 1);
}

int		ft_strcmp(char *str1, char *str2)
{
	while (*str1 && *str2 && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void	ft_sort(char *buffer[], int count)
{
	int		a;
	int		b;
	char	*temp;

	a = 1;
	while (a < count)
	{
		b = a + 1;
		while (b < count)
		{
			if (ft_strcmp(buffer[b], buffer[a]) < 0)
			{
				temp = buffer[a];
				buffer[a] = buffer[b];
				buffer[b] = temp;
			}
			b++;
		}
		a++;
	}
}

int		main(int ac, char *av[])
{
	int i;

	ft_sort(av, ac);
	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		i++;
	}
	return (0);
}
