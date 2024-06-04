/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppalma <ppalma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:55:39 by ppalma            #+#    #+#             */
/*   Updated: 2024/05/29 12:30:20 by ppalma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (src[c])
		c++;
	if (size < 1)
		return (c);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (c);
}
/*
int main ()
{
	char dest[40] = "destino original";
	char src[] = "source original transladado";
	size_t length;

	length = strlen(dest);
	printf("antes de implementar ft_strlcpy: %s\n", dest);
	printf("la longitud de la cadena es: %zu bytes\n", length);
    
	ft_strlcpy(dest, src, sizeof(dest));
	length = strlen(dest);

	printf("despues de implementar ft_strlcpy: %s\n", dest);
	printf("la longitud de la cadena es: %zu bytes\n", length);

	return(0);
}
*/