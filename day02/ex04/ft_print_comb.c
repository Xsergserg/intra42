/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 19:14:34 by rbeach            #+#    #+#             */
/*   Updated: 2020/01/30 16:41:14 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_putchar(char c);

void	ft_print_comb(void)
{
	int hun;
	int dec;
	int dgts;

	hun = -1;
	while (hun++ <= 9)
	{
		dec = hun + 1;
		while (dec <= 9)
		{
			dgts = dec + 1;
			while (dgts <= 9)
			{
				ft_putchar(hun + '0');
				ft_putchar(dec + '0');
				ft_putchar(dgts + '0');
				if (!(hun == 7 && dec == 8 && dgts == 9))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				dgts++;
			}
			dec++;
		}
	}
}
