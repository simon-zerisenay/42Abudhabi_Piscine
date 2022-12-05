/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:53:39 by szerisen          #+#    #+#             */
/*   Updated: 2021/07/03 11:54:40 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	converthexa(char c)
{
	int		d;
	int		r;
	char	*hexa;

	hexa = "0123456789abcdef";
	d = hexa[c / 16];
	r = hexa[c % 16];
	write(1, "\\", 1);
	write(1, &d, 1);
	write(1, &r, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 32 || str[index] == 127)
			converthexa(str[index]);
		else
			ft_putchar(str[index]);
		index++;
	}
}
