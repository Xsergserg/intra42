/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_pusher.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 15:45:13 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/17 15:45:15 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	ft_map_push(void)
{
	char **result;

	result = NULL;
	result = ft_resulter();
	result++;
	while (*result)
	{
		ft_putstr(*result);
		result++;
	}
}

char	**ft_resulter(void)
{
	t_coords cord;

	if (g_y_lines > g_x_lines)
		cord.len = g_y_lines;
	else
		cord.len = g_x_lines;
	while (cord.len != 0)
	{
		cord.y = 1;
		while ((cord.y + cord.len) <= g_y_lines + 1)
		{
			cord.x = 0;
			while ((cord.x + cord.len) <= g_x_lines)
			{
				if (ft_check_sqr(g_leoric, cord))
					return (ft_rewrite_sqr(g_leoric, cord));
				cord.x++;
			}
			cord.y++;
		}
		cord.len--;
	}
	return (g_leoric);
}
