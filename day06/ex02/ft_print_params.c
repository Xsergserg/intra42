/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 13:41:33 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/04 13:41:38 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_print_params(char **argv)
{
	int index1;
	int index2;

	index1 = 1;
	while (argv[index1] != '\0')
	{
		index2 = 0;
		while (argv[index1][index2] != '\0')
		{
			ft_putchar(argv[index1][index2]);
			index2++;
		}
		ft_putchar('\n');
		index1++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	argc = 0;
	ft_print_params(argv);
	return (0);
}
