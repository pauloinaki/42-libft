/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppalma <ppalma@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:51:29 by ppalma            #+#    #+#             */
/*   Updated: 2024/04/26 13:25:02 by ppalma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*restrict dst, const char *restrict src, size_t	dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	j;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	j = dstlen;
	while (dst[j] != '\0' && j < dstsize)
	{
		j++;
	}
	while (src[i] != '\0' && j + 1 < dstsize)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	if (j < dstsize)
	{
		dst[j] = '\0';
	}
	return (dstlen + srclen);
}
/*
int main()
{
	char dst[40] = "primer sección";
	char src[] = ", segunda sección";
	size_t new_len;

	printf("cadena de destino antes de ft_strlcat: %s\n", dst);

	new_len = ft_strlcat(dst, src, sizeof(dst));

	printf("Cadena de destino luego de implementar ft_strlcat: %s\n", dst);
	return(0);
}
*/