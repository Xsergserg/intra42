/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 13:05:33 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/04 13:05:45 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_print_program_name(char **argv)
{
	while (*argv[0] != '\0')
	{
		ft_putchar(*argv[0]);
		argv[0]++;
	}
	ft_putchar('\n');
	return (0);
}

int		main(int argc, char **argv)
{
	argc = 0;
	ft_print_program_name(argv);
	return (0);
}
