/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:38:43 by szerisen          #+#    #+#             */
/*   Updated: 2021/07/09 22:07:13 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		a;

	a = 0;
	while (str[a])
	{
		ft_putchar(str[a]);
		a++;
	}
}

void	ft_putnbr(int nbr)
{
	long	nb;
	int		a;
	char	c[10];

	nb = nbr;
	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	a = 0;
	while (nb > 0)
	{
		c[a] = nb % 10 + '0';
		nb = nb / 10;
		a++;
	}
	a--;
	while (a >= 0)
	{
		ft_putchar(c[a]);
		a--;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		a;

	a = 0;
	while (par[a].str != 0)
	{
		ft_putstr(par[a].str);
		ft_putchar('\n');
		ft_putnbr(par[a].size);
		ft_putchar('\n');
		ft_putstr(par[a].copy);
		ft_putchar('\n');
		a++;
	}
}
