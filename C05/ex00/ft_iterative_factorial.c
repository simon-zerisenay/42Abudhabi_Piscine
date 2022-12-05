/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:51:34 by szerisen          #+#    #+#             */
/*   Updated: 2021/07/04 18:43:37 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int k;
	int i;
	int temp;

	k = nb - 1;
	temp = nb;
	i = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
	{
		while (k > 0)
		{
			nb = nb * (temp - i);
			k--;
			i++;
		}
		return (nb);
	}
}
