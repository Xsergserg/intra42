/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 14:37:19 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/04 14:37:25 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_rev_params(char **argv)
{
	int index1;
	int index2;

	index1 = 1;
	while (argv[index1 + 1] != '\0')
		index1++;
	while (index1 != 0)
	{
		index2 = 0;
		while (argv[index1][index2] != '\0')
		{
			ft_putchar(argv[index1][index2]);
			index2++;
		}
		index1--;
		ft_putchar('\n');
	}
	return (0);
}

int		main(int argc, char **argv)
{
	argc = 0;
	ft_rev_params(argv);
	return (0);
}
