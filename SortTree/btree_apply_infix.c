/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 16:43:32 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/13 16:43:34 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	t_btree *ptr;

	ptr = root;
	if(ptr == NULL) return;
	btree_apply_infix(ptr->left, applyf);
	applyf(ptr->item);
	btree_apply_infix(ptr->right, applyf);
}
