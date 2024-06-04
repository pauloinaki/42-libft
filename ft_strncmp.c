/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppalma <ppalma@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:35:00 by ppalma            #+#    #+#             */
/*   Updated: 2024/04/26 13:19:39 by ppalma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && (*s1 != '\0' || *s2 != '\0'))
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}
/*
int main()
{
	const char *s1 = "test1";
	const char *s2 = "testeo1";
	int result;

	result = strncmp(s1, s2, 5);

	if(result == 0)
	{
		printf("las primeras 5 letras de las cadenas son iguales.");
	}
	else if(result < 0)
	{
		printf("las primeras 4 letras de la primera cadena 
		son menores que las de la segunda ");
	}
	else
	{
		printf("Las primeras 4 letras de la primera cadena 
		son mayores que las de la segunda.\n");
	}
	return(0);
}
*/