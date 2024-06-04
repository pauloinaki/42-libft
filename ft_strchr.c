/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppalma <ppalma@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:34:09 by ppalma            #+#    #+#             */
/*   Updated: 2024/04/25 15:34:23 by ppalma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}
/*
int main() {
	const char *str = "Testeo de función strchr";
	char *ptr;
	char ch = 'n';

	ptr = ft_strchr(str, ch);

	if (ptr != NULL) {
		printf("El carácter '%c' se encuentra en la posición 
		%ld del string\n", ch, ptr - str);
	} 
	else 
	{
		printf("El carácter '%c' no se encuentra en ninguna 
		posición de la cadena\n", ch);
	}
    return (0);
}
*/