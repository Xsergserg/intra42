/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 11:18:45 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/11 11:18:51 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0' && s1[index] == s2[index])
		index++;
	return (s1[index] - s2[index]);
}

void	ft_swap(char **a, char **b)
{
	char *swaper;

	swaper = *a;
	*a = *b;
	*b = swaper;
}

void	ft_sort_wordtab(char **tab)
{
	int i1;
	int i2;

	i2 = 1;
	while (tab[i2 - 1] != 0)
	{
		i1 = 1;
		while (tab[i1] != 0)
		{
			if (ft_strcmp(tab[i1 - 1], tab[i1]) > 0)
				ft_swap(&tab[i1 - 1], &tab[i1]);
			i1++;
		}
		i2++;
	}
}
