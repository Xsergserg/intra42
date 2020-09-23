/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 17:56:36 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/04 17:56:43 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
