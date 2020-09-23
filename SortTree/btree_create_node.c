/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:52:44 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/13 14:52:47 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*ptr;

	ptr = NULL;
	ptr = malloc(sizeof(t_btree));
	if (ptr)
	{
		ptr->item = item;
		ptr->left = NULL;
		ptr->right = NULL;
		
	}
	return (ptr);
}
