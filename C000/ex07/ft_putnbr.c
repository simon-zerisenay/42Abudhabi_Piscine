/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 13:57:45 by szerisen          #+#    #+#             */
/*   Updated: 2021/06/27 14:22:26 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char p)
{
	write(1, &p, 1);
}

void	ft_putnbr(int i)
{
	if (i == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (i < 0)
	{
		ft_putchar('-');
		ft_putnbr(i * -1);
	}
	else if (i < 10)
	{
		ft_putchar((i + '0'));
	}
	else
	{
		ft_putnbr(i / 10);
		ft_putchar((i % 10 + '0'));
	}
}
