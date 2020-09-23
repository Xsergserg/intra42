/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 15:26:52 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/17 15:26:55 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	ft_map(int argc, char **argv)
{
	int i;

	i = 1;
	while (i != argc)
	{
		g_leoric = NULL;
		if (ft_file_checker(argv[i]))
		{
			if (ft_map_checker(argv[i]))
				ft_map_push();
			else
				write(2, "map error\n", 10);
		}
		else
			write(2, "map error\n", 10);
		free(g_leoric);
		i++;
		if (i != argc)
			ft_putchar('\n');
	}
}

void	ft_map2(void)
{
	int		fd;
	char	a;

	fd = open(".temp", O_TRUNC | O_RDWR | O_CREAT, 0777);
	while (read(0, &a, 1) != 0)
		write(fd, &a, 1);
	close(fd);
	ft_putchar('\n');
	if (ft_file_checker(".temp"))
	{
		if (ft_map_checker(".temp"))
			ft_map_push();
		else
			write(2, "map error\n", 10);
	}
	else
		write(2, "map error\n", 10);
	free(g_leoric);
}
