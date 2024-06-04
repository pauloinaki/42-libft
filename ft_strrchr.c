/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppalma <ppalma@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:56:32 by ppalma            #+#    #+#             */
/*   Updated: 2024/04/26 13:19:24 by ppalma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*i;

	i = NULL;
	while (*s != '\0')
	{
		if (*s == c)
		{
			i = s;
		}
		s++;
	}
	return ((char *)i);
}
/*
int main()
{
	const char *str = "testeo de la función ft_strrchr";
	char *ptr;
	char ch = 'o';

	ptr = ft_strrchr(str, ch);
	
	if(ptr != NULL)
	{
		printf("La últinma aparaición del carácter %c se 
		encuentra en la posición: %ld\n", ch, ptr -str);
	}
		else
		{
			printf("El carácter %c no ha sido encontrado a lo 
			largo de la cadena", ch);
		}	
	return(0);
}
*/