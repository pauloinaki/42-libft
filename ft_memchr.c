/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppalma <ppalma@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:49:04 by ppalma            #+#    #+#             */
/*   Updated: 2024/04/25 15:30:51 by ppalma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	void				*result;
	const unsigned char	*p;
	size_t				i;

	result = NULL;
	p = (unsigned char *)s;
	i = 0;
	while (i < n && *p != (unsigned char)c)
	{
		p++;
		i++;
	}
	if (i < n)
	{
		result = (void *)p;
	}
	return (NULL);
}
/*
int main()
 {
    const char *str = "mas vale que compiles culiao!";
    char ch = 'v';
    
    const char *result = memchr(str, ch, strlen(str));
    
    if (result != NULL) 
	{
		printf("Se encontró '%c' en la posición %ld.\n", ch, result - str);
	} 
	else 
	{
		printf("'%c' no se encontró en la cadena.\n", ch);
	}
    return (0);
}
*/