/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 17:25:12 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/11 17:25:15 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*begin_list;
	t_list	*ptr;
	int		i;

	if (ac == 1)
		return (0);
	begin_list = ft_create_elem(av[1]);
	ptr = begin_list;
	i = 2;
	while (ac > 1)
	{
		ptr = ft_create_elem(av[i]);
		ptr->next = begin_list;
		begin_list = ptr;
		ac--;
		i++;
	}
	return (begin_list);
}
