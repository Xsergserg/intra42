/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 17:43:10 by whortenc          #+#    #+#             */
/*   Updated: 2020/02/17 17:43:11 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int		ft_check_sqr(char **str, t_coords cord)
{
	int k;
	int j;
	int p;

	j = 0;
	p = cord.x;
	while (j < cord.len)
	{
		k = 0;
		cord.x = p;
		while (k < cord.len)
		{
			if (str[cord.y][cord.x] == g_obst)
				return (0);
			else
			{
				cord.x++;
				k++;
			}
		}
		j++;
		cord.y++;
	}
	return (1);
}

char	**ft_rewrite_sqr(char **diablo, t_coords cord)
{
	int k;
	int j;
	int h;

	j = 0;
	h = cord.x;
	while (j < cord.len)
	{
		k = 0;
		cord.x = h;
		while (k < cord.len)
		{
			diablo[cord.y][cord.x] = g_full;
			cord.x++;
			k++;
		}
		j++;
		cord.y++;
	}
	return (diablo);
}
