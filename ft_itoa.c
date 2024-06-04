/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppalma <ppalma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:11:58 by ppalma            #+#    #+#             */
/*   Updated: 2024/05/28 15:16:34 by ppalma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static		int	ft_sizen(long number)
{
	int	i;

	i = 1;
	if (number < 0)
	{
		i++;
		number = number * -1;
	}
	while (number > 9)
	{
		number = number / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*string;
	int		size;
	long	long_n;

	long_n = (long)n;
	size = ft_sizen(long_n);
	string = (char *)malloc(sizeof(char) * size + 1);
	if (!string)
		return (NULL);
	string[size] = '\0';
	if (long_n < 0)
	{
		string[0] = '-';
		long_n = long_n * -1;
	}
	if (long_n == 0)
		string[0] = '0';
	while (long_n > 9)
	{
		string[--size] = (long_n % 10) + '0';
		long_n /= 10;
	}
	if (long_n > 0)
		string[--size] = long_n + '0';
	return (string);
}
