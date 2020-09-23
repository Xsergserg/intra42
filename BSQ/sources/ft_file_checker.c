/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_checker.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 15:44:43 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/17 15:45:26 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int		ft_file_checker(char *f_name)
{
	char	c;
	int		fd;

	fd = open(f_name, O_RDONLY);
	if (read(fd, &c, 1) < 0)
		return (0);
	close(fd);
	return (1);
}
