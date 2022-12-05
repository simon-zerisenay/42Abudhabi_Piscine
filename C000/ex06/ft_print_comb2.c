/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 16:12:08 by szerisen          #+#    #+#             */
/*   Updated: 2021/06/26 16:51:21 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int p)
{
	int p1;
	int p2;

	p1 = p / 10 + '0';
	p2 = p % 10 + '0';
	write(1, &p1, 1);
	write(1, &p2, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_putchar(a);
			write(1, " ", 1);
			ft_putchar(b);
			if (!(b == 99 && a == 98))
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
