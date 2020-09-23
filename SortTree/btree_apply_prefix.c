/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 15:07:32 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/13 15:07:35 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	btree_apply_prefix(t_btree *root, void(*applyf)(void *))
{
	t_btree *ptr;

	ptr = root;
	if(ptr == NULL) return;
	applyf(ptr->item);
	btree_apply_prefix(ptr->left, applyf);
	btree_apply_prefix(ptr->right, applyf);
}