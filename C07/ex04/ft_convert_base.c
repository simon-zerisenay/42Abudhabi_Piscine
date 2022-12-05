/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 21:26:03 by szerisen          #+#    #+#             */
/*   Updated: 2021/07/14 21:29:04 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_checker(char *base);
int		checkbase(char c, char *base);

int		lenbr(int nbr, int base_lenght)
{
	int a;
	int pbase;

	if (nbr == 0)
		return (1);
	a = 1;
	pbase = 1;
	while (a <= nbr)
	{
		a = a * base_lenght;
		pbase++;
	}
	return (pbase - 1);
}

char	*ft_char(char *dest, char src)
{
	unsigned int i;

	i = 0;
	while (dest[i])
		i++;
	dest[i++] = src;
	dest[i] = '\0';
	return (dest);
}

void	ft_putnbr_base(int nbr, int nbase, char *num_base, char *base)
{
	if (nbr >= nbase)
	{
		ft_putnbr_base((nbr / nbase), nbase, num_base, base);
	}
	ft_char(num_base, base[nbr % nbase]);
}

char	*ft_putnbr(int nbr, char *base, int sign)
{
	int		nbase;
	int		pbase;
	char	*num_base;
	int		i;

	nbase = ft_strlen(base);
	pbase = lenbr(nbr, nbase);
	i = -1;
	if (sign % 2 != 0 && nbr != 0)
	{
		if (!(num_base = malloc((pbase + 2) * sizeof(char))))
			return (0);
		while (++i < pbase + 2)
			num_base[i] = '\0';
		num_base[0] = '-';
	}
	else
	{
		if (!(num_base = malloc((pbase + 1) * sizeof(char))))
			return (0);
		while (++i < pbase + 1)
			num_base[i] = '\0';
	}
	ft_putnbr_base(nbr, nbase, num_base, base);
	return (num_base);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int i;
	int j;
	int fnb;
	int sign;

	i = 0;
	fnb = 0;
	sign = 0;
	if (ft_checker(base_from) != 0 || ft_checker(base_to))
		return (0);
	while (nbr[i] && (nbr[i] == ' ' || nbr[i] == '\f' ||
		nbr[i] == '\n' || nbr[i] == '\t' || nbr[i] == '\v'))
		i++;
	while (nbr[i] && (nbr[i] == '+' || nbr[i] == '-'))
		if (nbr[i++] == '-')
			sign++;
	while (nbr[i] && checkbase(nbr[i], base_from) == 0)
	{
		j = 0;
		while (base_from[j])
			if (base_from[j++] == nbr[i])
				fnb = fnb * ft_strlen(base_from) + j - 1;
		i++;
	}
	return (ft_putnbr(fnb, base_to, sign));
}
