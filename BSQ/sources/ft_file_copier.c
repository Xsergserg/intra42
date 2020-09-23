/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_copier.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 12:45:59 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/18 12:46:02 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	ft_file_copier(char *f_name)
{
	int		fd;
	char	c;
	int		i;
	char	*mass;

	mass = NULL;
	i = ft_file_sizer(f_name);
	if (!(mass = (char*)malloc(50 * (i + 1))))
		return ;
	fd = open(f_name, O_RDONLY);
	i = 0;
	while (read(fd, &c, 1) > 0)
	{
		mass[i] = c;
		i++;
	}
	close(fd);
	mass[i] = '\0';
	g_leoric = ft_split_leoric(mass);
	free(mass);
}

int		ft_file_sizer(char *f_name)
{
	int		i;
	int		fd;
	char	c;

	i = 0;
	fd = open(f_name, O_RDONLY);
	while (read(fd, &c, 1))
	{
		i++;
		if (!(read(fd, &c, 1)))
			break ;
	}
	close(fd);
	return (i);
}
