/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 19:20:11 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/10 19:20:17 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int		main(int argc, char **argv)
{
	int x;
	int y;

	if (argc != 4)
		return (0);
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[3]);
	if (*argv[2] == '/' && y == 0 && !argv[2][1])
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (*argv[2] == '%' && y == 0 && !argv[2][1])
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	ft_putnbr(ft_calc(x, y, argv[2]));
	ft_putchar('\n');
	return (0);
}
