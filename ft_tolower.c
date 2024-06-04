/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppalma <ppalma@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:13:49 by ppalma            #+#    #+#             */
/*   Updated: 2024/04/25 18:12:35 by ppalma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		c += 32;
	}
	return (c);
}
/*
int main()
{
	int	x;

	x = 74;
	printf("caracter antes de ft_tolower %c\n",(x));
	
	x = ft_tolower(x);
	printf("caracter después de ft_tolower %c\n",(x));
	return(0);
}
*/