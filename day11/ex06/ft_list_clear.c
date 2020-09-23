/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 19:24:36 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/11 19:24:38 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *ptr;
	t_list *next;

	ptr = *begin_list;
	while (ptr)
	{
		if (ptr->next)
			next = ptr->next;
		else
			next = 0;
		free(ptr);
		ptr = next;
	}
}
