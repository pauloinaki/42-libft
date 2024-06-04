/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppalma <ppalma@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:25:51 by ppalma            #+#    #+#             */
/*   Updated: 2024/04/24 17:27:23 by ppalma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(char c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
/*int main()
{
	char	x;

	x = 'p';
	printf("Si es un valor de ascii dara 1:\n%d",ft_isascii(x));
	return (0);
}*/