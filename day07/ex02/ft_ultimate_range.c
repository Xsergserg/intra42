/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 19:50:49 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/06 19:50:55 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int index;

	if (min >= max)
		return (0);
	index = 0;
	*range = (int *)malloc(sizeof(int) * (max - min + 1));
	if (*range)
	{
		while ((index + min) < max)
		{
			(*range)[index] = index + min;
			index++;
		}
		return (max - min);
	}
	return (0);
}
