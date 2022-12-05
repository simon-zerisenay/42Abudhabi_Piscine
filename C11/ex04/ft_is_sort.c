/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 21:58:41 by szerisen          #+#    #+#             */
/*   Updated: 2021/07/13 17:59:18 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_ascending_sorted(int *tab, int length, int (*f)(int, int))
{
	int		a;

	a = 0;
	while (a < length - 1)
	{
		if (f(tab[a], tab[a + 1]) > 0)
			return (0);
		a++;
	}
	return (1);
}

int		ft_is_descending_sorted(int *tab, int length, int (*f)(int, int))
{
	int		a;

	a = 0;
	while (a < length - 1)
	{
		if (f(tab[a], tab[a + 1]) < 0)
			return (0);
		a++;
	}
	return (1);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (ft_is_ascending_sorted(tab, length, f) ||
			ft_is_descending_sorted(tab, length, f))
		return (1);
	else
		return (0);
}

int		ft_strcmp(int nb1, int nb2)
{
	if (nb1 < nb2)
		return (-1);
	else if (nb1 == nb2)
		return (0);
	else
		return (1);
}
