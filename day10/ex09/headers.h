/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 19:50:23 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/10 19:50:28 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
#define HEADERS_H

typedef struct
{
	char	operator;
	int		(*f)(int, int);
} t_oops;

int		ft_atoi(char *str);

int		ft_calc(int x, int y, char *op);

void	ft_putchar(char c);

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

int		ft_mul(int x, int y);

int		ft_sum(int x, int y);

int		ft_dec(int x, int y);

int		ft_mod(int x, int y);

int		ft_div(int x, int y);

#endif
