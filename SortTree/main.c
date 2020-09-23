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
#include <stdio.h>
#include <unistd.h>
#include <io.h>


t_btree	*btree_create_node(void *item)
{
	t_btree	*ptr;

	ptr = NULL;
	ptr =(t_btree*)malloc(sizeof(t_btree));
	if (ptr)
	{
		ptr->item = item;
		ptr->left = NULL;
		ptr->right = NULL;
		
	}
	return (ptr);
}



int		ft_strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] != '\0' || s2[index] != '\0')
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (s1[index] - s2[index]);
}

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if(root == NULL) return;
	btree_apply_infix(root->left, applyf);
	applyf(root->item);
	btree_apply_infix(root->right, applyf);
}

void	btree_apply_prefix(t_btree *root, void(*applyf)(void *))
{
	if(root == NULL) return;
	applyf(root->item);
	btree_apply_prefix(root->left, applyf);
	btree_apply_prefix(root->right, applyf);
}

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if(root == NULL) return;
	btree_apply_suffix(root->left, applyf);
	btree_apply_suffix(root->right, applyf);
	applyf(root->item);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	if (!(*root))
		{
		*root = btree_create_node(item);
		return ;
		}
	if (cmpf((*root)->item, item) > 0)
		btree_insert_data(&(*root)->left, item, cmpf);
	else
		btree_insert_data(&(*root)->right, item, cmpf);
}

int		main(void)
{	
	t_btree *root;

	root = NULL;
	btree_insert_data(&root, "7", &ft_strcmp);
	btree_insert_data(&root, "5", &ft_strcmp);
	btree_insert_data(&root, "6", &ft_strcmp);
	btree_insert_data(&root, "4", &ft_strcmp);
	btree_insert_data(&root, "4", &ft_strcmp);
	btree_insert_data(&root, "2", &ft_strcmp);
	btree_insert_data(&root, "3", &ft_strcmp);
	btree_apply_prefix(root, ft_putstr);
	ft_putchar('\n');
	btree_apply_infix(root, ft_putstr);
	ft_putchar('\n');
	btree_apply_suffix(root, ft_putstr);
	ft_putchar('\n');
	return (0);
}