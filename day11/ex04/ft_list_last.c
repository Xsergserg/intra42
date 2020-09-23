/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 17:03:55 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/11 17:03:57 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *ptr;

	ptr = begin_list;
	if (ptr)
	{
		while (ptr->next)
			ptr = ptr->next;
		return (ptr);
	}
	return (ptr);
}
