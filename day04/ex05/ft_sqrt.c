/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 17:22:20 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/01 18:16:07 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int dev;
	int x;

	dev = 0;
	x = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (dev < nb)
	{
		dev = x * x;
		if (dev == nb)
		{
			return (x);
		}
		x++;
	}
	return (0);
}
