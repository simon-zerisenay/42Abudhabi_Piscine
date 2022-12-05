/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 21:57:22 by szerisen          #+#    #+#             */
/*   Updated: 2021/07/12 21:25:59 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		a;
	int		*output_tab;

	if (!(output_tab = (int *)malloc(sizeof(int) * length)))
		return (0);
	a = 0;
	while (a < length)
	{
		output_tab[a] = f(tab[a]);
		a++;
	}
	return (output_tab);
}
