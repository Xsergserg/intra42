/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 19:50:31 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/06 19:50:37 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *result;
	int index;

	if (min >= max)
		return (NULL);
	index = 0;
	result = malloc(sizeof(int) * (max - min + 1));
	if (result)
	{
		while (index + min < max)
		{
			result[index] = index + min;
			index++;
		}
		result[index] = '\0';
	}
	return (result);
}
