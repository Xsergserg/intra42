/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 11:18:45 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/11 11:18:51 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0' && s1[index] == s2[index])
		index++;
	return (s1[index] - s2[index]);
}

void	ft_swap(char **a, char **b)
{
	char *swaper;

	swaper = *a;
	*a = *b;
	*b = swaper;
}

char **ft_sort_wordtab(char **tab)
{
	int		i1;
	int		i2;

	i2 = 1;
	while (tab[i2-1] != 0)
	{
		i1 = 1;
		while (tab[i1] != 0)
		{
			if (ft_strcmp(tab[i1-1], tab[i1]) > 0)
				ft_swap(&tab[i1-1], &tab[i1]);
			i1++;
		}
		i2++;
	}
	return (tab);
}

int ft_word_counter(char *str)
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while(str[i] != '\0')
	{
		if (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		{
			if (str[i+1] == ' ' || str[i+1] == '\t' || str[i+1] == '\n' || str[i+1] == '\0')
				counter++;
		}
	i++;
	}
	return(counter);
}

int ft_word_sizer(char *str, int ind)
{
	int current_word;
	int size;
	int i;

	i = 0;
	size = 0;
	current_word = 0;
	while(str[i] != '\0')
	{
		if (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		{	
			size++;
			if (str[i+1] == ' ' || str[i+1] == '\t' || str[i+1] == '\n' || str[i+1] == '\0')
			{
				if (current_word == ind)
					//printf("%d", size);
					return (size);
				current_word++;
			}
		}
		i++;
	}
	
	return (0);
}

void ft_range_fuller(char **result, char *str, int word_counter)
{
	int ind;

	ind = 0;
	while(ind < word_counter)
	{
		result[ind] = (char*)malloc(sizeof(char*) * (ft_word_sizer(str, ind)));
		ind++;
	}
	//printf("%d", word_counter);
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
		if (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		{	
			result[current_word][current_ch] = str[i];
			current_ch++;	
			if (str[i+1] == ' ' || str[i+1] == '\t' || str[i+1] == '\n' || str[i+1] == '\0')
				{
					current_word++;
					current_ch = 0;
				}
		}
		i++;
	}
}

char **ft_split_whitespaces(char *str)
{
	int i;
	char **result;
	int word_counter;

	word_counter = ft_word_counter(str);
	i = 0;
	result = NULL;
	result = (char**)malloc(sizeof(char*) * (word_counter+1));
	ft_range_fuller(result, str, word_counter);
	ft_copier(result, str);
	result[word_counter] = 0;
	return (result);
}

int main(void)
{
	int i;

	i = 0;
	char line[] = "4545             76876                 8756767            1";
	
	while (i <= 4)
	{
		printf("%s\n", ft_sort_wordtab(ft_split_whitespaces(line))[i]);
		i++;
	}
	return(0);
}