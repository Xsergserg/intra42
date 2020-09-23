/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 16:55:33 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/11 16:55:36 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list *ptr;
	int i;

	i = 0;
	ptr = begin_list;
	while (ptr)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
