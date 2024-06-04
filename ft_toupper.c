/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppalma <ppalma@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:46:45 by ppalma            #+#    #+#             */
/*   Updated: 2024/04/25 18:12:43 by ppalma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		c -= 32;
	}
	return (c);
}
/*
int main()
{
	int	x;

	x = 101;
	printf("caracter antes de ft_toupper %c\n",(x));
	
	x = ft_toupper(x);
	printf("caracter después de ft_toupper %c\n",(x));
	return(0);
}
*/