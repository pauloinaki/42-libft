/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppalma <ppalma@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:19:15 by ppalma            #+#    #+#             */
/*   Updated: 2024/04/26 13:04:41 by ppalma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
	{
		return ((char *)haystack);
	}
	while (*haystack && len >= needle_len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
		{
			return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}

/*
 int main()
 {
    const char *haystack = "Segmento a testear de la funcion strnstr";
    const char *needle = "funcion";

    char *result = ft_strnstr(haystack, needle, strlen(haystack));

    if (result)
    {
        printf("Se encontro la subcadena '%s' 
		en la posicion %ld\n", needle, result - haystack);
    }
    else
    {
        printf("No se encontró la subcadena solicitada\n");
    }

    return (0);
}
*/