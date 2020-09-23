/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 19:19:53 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/10 19:20:01 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "headers.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	if (nb < 10 && nb >= 0)
	{
		ft_putchar(nb + '0');
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
}

int		ft_atoi(char *str)
{
	int sign;
	int result;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '	')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		result += (*str - '0');
		if (!(*(str + 1) >= '0' && (*(str + 1) <= '9')))
			return (result * sign);
		result *= 10;
		str++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_calc(int x, int y, char *op)
{
	int		index;
	t_oops	opermas[] =
	{
		{'*', &ft_mul},
		{'+', &ft_sum},
		{'-', &ft_dec},
		{'%', &ft_mod},
		{'/', &ft_div}
	};

	index = 0;
	if (*(op + 1))
		return (0);
	while (index < 5)
	{
		if (opermas[index].operator == *op)
			return (opermas[index].f(x, y));
		index++;
	}
	return (0);
}
