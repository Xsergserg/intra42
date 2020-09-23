/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 15:11:46 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/11 15:11:49 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *ptr;

	ptr = NULL;
	ptr = malloc(sizeof(t_list));
	if (ptr)
	{
		ptr->data = data;
		ptr->next = NULL;
	}
	return (ptr);
}
