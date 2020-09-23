/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 12:43:28 by rbeach            #+#    #+#             */
/*   Updated: 2020/01/30 16:41:57 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_full_print(int a1, int a2, int b1, int b2)
{
	if (a1 < b1 || ((a1 == b1) && (a2 < b2)))
	{
		ft_putchar(a1 + '0');
		ft_putchar(a2 + '0');
		ft_putchar(' ');
		ft_putchar(b1 + '0');
		ft_putchar(b2 + '0');
		if (!(a1 == 9 && a2 == 8 && b1 == 9 && b2 == 9))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_circles(int a1, int a2, int b1, int b2)
{
	while (a1++ <= 9)
	{
		a2 = 0;
		while (a2 <= 9)
		{
			while (b1 <= 9)
			{
				while (b2 <= 9)
				{
					ft_full_print(a1, a2, b1, b2);
					b2++;
				}
				b2 = 0;
				b1++;
			}
			b1 = 0;
			a2++;
		}
		a2 = 0;
	}
}

void	ft_print_comb2(void)
{
	int a1;
	int a2;
	int b1;
	int b2;

	a1 = -1;
	a2 = 0;
	b1 = 0;
	b2 = 0;
	ft_circles(a1, a2, b1, b2);
}
