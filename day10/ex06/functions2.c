/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 13:31:00 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/11 13:31:03 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int		ft_oper_choise(char *op)
{
	if (*op == '*')
		return (0);
	if (*op == '+')
		return (1);
	if (*op == '-')
		return (2);
	if (*op == '%')
		return (3);
	if (*op == '/')
		return (4);
	return (-1);
}

int		ft_calc(int x, int y, char *op)
{
	int index;
	int (*opermas[5])(int, int);

	opermas[0] = &ft_mul;
	opermas[1] = &ft_sum;
	opermas[2] = &ft_dec;
	opermas[3] = &ft_mod;
	opermas[4] = &ft_div;
	index = 0;
	if (*(op + 1))
		return (0);
	if (*op == '*' || *op == '+' || *op == '-' || *op == '%' || *op == '/')
		return ((opermas[ft_oper_choise(op)])(x, y));
	return (0);
}
