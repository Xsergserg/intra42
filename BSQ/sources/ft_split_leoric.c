/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_g_leoric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 10:19:54 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/18 10:19:56 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int		ft_word_counter(char *str)
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '\n')
		{
			if (str[i + 1] == '\n' || str[i + 1] == '\0')
				counter++;
		}
		if (str[i] == '\n' && str[i + 1] == '\n')
			counter++;
		i++;
	}
	return (counter);
}

int		ft_word_sizer(char *str, int ind)
{
	int current_word;
	int size;
	int i;

	i = 0;
	size = 0;
	current_word = 0;
	while (str[i] != '\0')
	{
		size++;
		if (str[i + 1] == '\n' || str[i + 1] == '\0')
		{
			if (current_word == ind)
			{
				return (size);
			}
			current_word++;
			size = 0;
		}
		i++;
	}
	return (0);
}

void	ft_range_fuller(char **result, char *str, int word_counter)
{
	int ind;
	int word_size;

	ind = 0;
	while (ind < word_counter)
	{
		word_size = ft_word_sizer(str, ind);
		result[ind] = malloc(100 * (word_size + 1));
		ind++;
	}
}

void	ft_copier(char **result, char *str)
{
	int i;
	int current_word;
	int current_ch;

	i = 0;
	current_word = 0;
	current_ch = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '\n')
		{
			result[current_word][current_ch] = str[i];
			current_ch++;
			if (str[i + 1] == '\n')
			{
				result[current_word][current_ch] = '\n';
				result[current_word][current_ch + 1] = '\0';
				current_word++;
				current_ch = 0;
			}
		}
		i++;
	}
}

char	**ft_split_leoric(char *str)
{
	int		i;
	char	**result;
	int		word_counter;

	word_counter = ft_word_counter(str);
	i = 0;
	result = NULL;
	result = (char**)malloc(50 * (word_counter + 1));
	ft_range_fuller(result, str, word_counter);
	ft_copier(result, str);
	result[word_counter] = 0;
	return (result);
}
