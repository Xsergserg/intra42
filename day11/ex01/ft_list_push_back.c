/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 15:58:06 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/11 15:58:09 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *ptr;

	ptr = *begin_list;
	if (ptr)
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
