/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 17:57:57 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/04 17:58:01 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int index_str;
	int index_to_find;
	int error;

	index_str = 0;
	while (str[index_str] != '\0')
	{
		index_to_find = 0;
		error = 0;
		while (to_find[index_to_find] != '\0')
		{
			if (str[index_str + index_to_find] != to_find[index_to_find])
			{
				error = 1;
				break ;
			}
			index_to_find++;
		}
		if (error == 0)
		{
			return (&str[index_str]);
		}
		index_str++;
	}
	return ("NULL");
}
