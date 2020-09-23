/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 17:57:29 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/04 17:57:33 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int index;
	int num;

	num = n - 1;
	index = 0;
	while (num >= index && src[index] != '\0')
	{
		if (src[index] != '\0')
		{
			dest[index] = src[index];
			index++;
		}
	}
	while (num >= index)
	{
		dest[index] = '0';
		index++;
	}
	if (src[index] == 0)
		dest[index] = '\0';
	return (dest);
}
