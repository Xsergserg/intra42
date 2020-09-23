/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 17:39:01 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/10 17:39:08 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int index;
	int result;

	result = 0;
	index = 0;
	while (tab[index] != 0)
	{
		if (f(tab[index]) == 1)
			result++;
		index++;
	}
	return (result);
}
