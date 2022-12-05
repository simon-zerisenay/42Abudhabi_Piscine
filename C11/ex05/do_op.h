/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 23:14:18 by szerisen          #+#    #+#             */
/*   Updated: 2021/07/13 18:03:41 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H
# include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);
void	ft_putnbr(int nbr);
int		ft_addition(int nb1, int nb2);
int		ft_substraction(int nb1, int nb2);
int		ft_multiplication(int nb1, int nb2);
int		ft_division(int nb1, int nb2);
int		ft_modulo(int nb1, int nb2);

#endif
