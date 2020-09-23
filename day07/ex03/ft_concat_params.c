/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 19:51:09 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/06 19:51:16 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_argvs_size(int argc, char **argv)
{
	int argvs_len;
	int index1;
	int index2;

	argvs_len = 0;
	index1 = 1;
	while (index1 != argc)
	{
		index2 = 0;
		while (argv[index1][index2] != '\0')
		{
			argvs_len++;
			index2++;
		}
		argvs_len++;
		index1++;
	}
	return (argvs_len);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*result;
	int		argvs_len;
	int		index1;
	int		index2;

	argvs_len = ft_argvs_size(argc, argv);
	result = (char*)malloc(sizeof(char) * (argvs_len + 1));
	index1 = 1;
	while (index1 != argc)
	{
		index2 = 0;
		while (argv[index1][index2] != '\0')
		{
			*result = argv[index1][index2];
			result++;
			index2++;
		}
		*result = '\n';
		result++;
		index1++;
	}
	*result = '\0';
	result -= argvs_len;
	return (result);
}
