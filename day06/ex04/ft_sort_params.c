/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 14:37:19 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/04 14:37:25 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcpm(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0' && s1[index] == s2[index])
		index++;
	return (s1[index] - s2[index]);
}

void	ft_sorting(int argc, char **argv)
{
	char	*tmp;
	int		i1;

	while (argc != 1)
	{
		i1 = 1;
		while (i1 != (argc - 1))
		{
			if (ft_strcpm(argv[i1], argv[i1 + 1]) > 0)
			{
				tmp = argv[i1];
				argv[i1] = argv[i1 + 1];
				argv[i1 + 1] = tmp;
			}
			i1++;
		}
		argc--;
	}
}

int		ft_rev_params(int argc, char **argv)
{
	int index1;
	int index2;

	ft_sorting(argc, argv);
	index1 = 1;
	while (argv[index1] != '\0')
	{
		index2 = 0;
		while (argv[index1][index2] != '\0')
		{
			ft_putchar(argv[index1][index2]);
			index2++;
		}
		ft_putchar('\n');
		index1++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	ft_rev_params(argc, argv);
	return (0);
}
