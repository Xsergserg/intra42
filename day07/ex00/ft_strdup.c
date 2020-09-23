/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 19:50:03 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/06 19:50:11 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *src)
{
	int index;

	index = 0;
	while (src[index] != '\0')
		index++;
	return (index);
}

char	*ft_strcpy(char *src2, char *src)
{
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		src2[index] = src[index];
		index++;
	}
	src2[index] = '\0';
	return (src2);
}

char	*ft_strdup(char *src)
{
	char *src2;

	src2 = (char*)malloc(sizeof(*src) * (ft_strlen(src) + 1));
	if (src2)
		return (ft_strcpy(src2, src));
	else
		return (NULL);
}
