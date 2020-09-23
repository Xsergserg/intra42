/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 16:48:55 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/10 16:48:58 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int index;
	int *res;

	index = 0;
	res = (int *)(malloc(length * 4));
	while (index < length)
	{
		res[index] = f(tab[index]);
		index++;
	}
	return (res);
}
