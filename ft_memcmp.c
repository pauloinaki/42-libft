/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppalma <ppalma@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:58:48 by ppalma            #+#    #+#             */
/*   Updated: 2024/04/25 18:13:50 by ppalma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = s1;
	p2 = s2;
	while (n-- > 0)
	{
		if (*p1 != *p2)
		{
			return (*p1 - *p2);
		}
		p1++;
		p2++;
	}
	return (0);
}
/*
int main()
{
	char str1[] = "Testeo de memcmp 1";
	char str2[] = "Testeo de memcmp 1";
	
	int resultado = ft_memcmp(str1, str2, sizeof(str1));
	
	if(resultado == 0)
	{
		printf("\nlas cadenas son idénticas.\n");
	}
	else if(resultado < 0)
	{
		printf("\nla primera cadena es de menor longitud que la segunda\n");
	}
	else
	{
		printf("\nla primera cadena es de mayor longitud que la segunda\n");
	}
	return(0);
}
*/