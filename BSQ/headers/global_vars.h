/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global_vars.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 16:33:48 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/17 16:33:50 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GLOBAL_VARS_H
# define GLOBAL_VARS_H

char	**g_leoric;
int		g_y_lines;
int		g_x_lines;
char	g_empt;
char	g_obst;
char	g_full;

typedef struct
{
	int						x;
	int						y;
	int						len;
}							t_coords;

typedef struct				s_list
{
	struct s_list			*next;
	char					data;
}							t_list;

#endif
