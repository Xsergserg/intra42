/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 17:22:48 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/13 17:22:50 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>
#include <io.h>

void btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	if (!(*root))
		*root = btree_create_node(item);
	if (cmpf((*root)->item, item) > 0)
		btree_insert_data(&(*root)->left, item, cmpf);
	else
		btree_insert_data(&(*root)->right, item, cmpf);
}
