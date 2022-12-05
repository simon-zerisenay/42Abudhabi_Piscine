/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 23:58:26 by szerisen          #+#    #+#             */
/*   Updated: 2021/07/02 12:07:45 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			caps(char a)
{
	if (((a < 65) || (a > 90 && a < 97) || (a > 122)) && !(a >= 48 && a <= 57))
		return (1);
	return (0);
}

char		*ft_strcapitalize(char *str)
{
	int i;
	int readcaps;

	readcaps = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (readcaps && (str[i] >= 97 && str[i] <= 122))
		{
			str[i] -= 32;
		}
		else if (!readcaps &&
				(str[i] >= 65 && str[i] <= 90))
		{
			str[i] += 32;
		}
		readcaps = caps(str[i]);
		i++;
	}
	return (str);
}
