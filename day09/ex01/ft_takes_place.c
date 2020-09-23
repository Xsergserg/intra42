/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_place.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 16:56:57 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/06 16:57:02 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_other(int hour)
{
	if (hour == 0 || hour == 24)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("12.00 A.M. AND 1.00 A.M.\n");
	}
	if (hour == 11)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("11.00 A.M. AND 12.00 P.M.\n");
	}
	if (hour == 12)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("12.00 P.M. AND 1.00 P.M.\n");
	}
	if (hour == 23)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("11.00 P.M. AND 12.00 A.M. \n");
	}
}

void	ft_takes_place(int hour)
{
	if (hour > 0 && hour < 11)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%d.00 A.M. AND %d.00 A.M.\n", hour, hour + 1);
	}
	if (hour > 12 && hour < 23)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%d.00 P.M. AND %d.00 P.M.\n", hour - 12, hour - 11);
	}
	ft_other(hour);
}
