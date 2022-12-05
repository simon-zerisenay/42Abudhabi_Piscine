/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 20:37:29 by szerisen          #+#    #+#             */
/*   Updated: 2021/07/02 18:56:46 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;
	int				endsrc;

	endsrc = 0;
	index = 0;
	while (index < n)
	{
		if (src[index] == '\0')
		{
			endsrc = 1;
		}
		if (!endsrc)
		{
			dest[index] = src[index];
		}
		else
		{
			dest[index] = '\0';
		}
		index++;
	}
	return (dest);
}
