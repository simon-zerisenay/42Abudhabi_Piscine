/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 21:58:16 by szerisen          #+#    #+#             */
/*   Updated: 2021/07/12 05:41:39 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int length, int (*f)(char *))
{
	int		a;
	int		b;

	a = 0;
	b = 0;
	while (a < length)
	{
		if (f(tab[a]) != 0)
			b++;
		a++;
	}
	return (b);
}
