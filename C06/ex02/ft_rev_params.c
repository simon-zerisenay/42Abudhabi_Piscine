/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:02:35 by szerisen          #+#    #+#             */
/*   Updated: 2021/07/05 19:51:59 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *param)
{
	while (*param)
	{
		write(1, param, 1);
		param++;
	}
}

int		main(int ac, char **av)
{
	while (ac > 1)
	{
		ft_putstr(av[ac - 1]);
		write(1, "\n", 1);
		ac--;
	}
	return (0);
}
