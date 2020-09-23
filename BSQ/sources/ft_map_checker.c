/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 15:45:01 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/17 15:45:05 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int		ft_map_checker(char *f_name)
{
	ft_file_copier(f_name);
	if (!(ft_legend_checker(g_leoric[0])))
		return (0);
	if (!(ft_desk_checker()))
		return (0);
	return (1);
}

int		ft_legend_checker(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i < 5 || str[i - 1] != '\n')
		return (0);
	i--;
	g_full = str[--i];
	g_obst = str[--i];
	g_empt = str[--i];
	str[i] = '\0';
	if (!(ft_legend_checker_2(str)))
		return (0);
	g_x_lines = 0;
	if (!g_leoric[1])
		return (0);
	while (g_leoric[1][g_x_lines] != '\0')
		g_x_lines++;
	if (g_leoric[1][g_x_lines - 1] == '\n')
		g_x_lines--;
	else
		return (0);
	return (1);
}

int		ft_legend_checker_2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	g_y_lines = ft_atoi(str);
	return (1);
}

int		ft_desk_checker(void)
{
	int i;
	int m;

	i = 1;
	while (g_leoric[i] != 0)
	{
		m = 0;
		while (g_leoric[i][m] != '\0')
		{
			if (g_leoric[i][m] != g_empt &&\
			g_leoric[i][m] != g_obst && g_leoric[i][m] != '\n')
				return (0);
			m++;
		}
		if (m != g_x_lines + 1)
			return (0);
		i++;
	}
	if ((i - 1) != g_y_lines)
		return (0);
	return (1);
}
