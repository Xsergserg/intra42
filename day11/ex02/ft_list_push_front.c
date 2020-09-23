/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 16:25:59 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/11 16:26:02 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *ptr;

	if (*begin_list)
	{
		ptr = ft_create_elem(data);
		ptr->next = *begin_list;
		*begin_list = ptr;
	}
	else
		begin_list = ft_create_elem(data);
}
