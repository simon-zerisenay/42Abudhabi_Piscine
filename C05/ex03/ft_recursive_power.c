/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 18:57:59 by szerisen          #+#    #+#             */
/*   Updated: 2021/07/06 12:53:10 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int k;

	k = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	else
		return (nb);
}
