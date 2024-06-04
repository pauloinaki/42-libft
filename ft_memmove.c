/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppalma <ppalma@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:49:04 by ppalma            #+#    #+#             */
/*   Updated: 2024/04/25 18:23:20 by ppalma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)

{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d < s || d >= (s + len))
	{
		while (len--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		d += len - 1;
		s += len - 1;
		while (len--)
		{
			*d-- = *s--;
		}
	}
	return (dst);
}
/*
 int main()
 {
	char str1[50] = "testeo de memmove 1";
	char str2[50] = "testeo de memmove 2";

	printf("antes de ft_memmove:\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);

	ft_memmove(str1 + 4, str2 + 3, 5);

	printf("\nDespués de ft_memmove:\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);

	return (0);
 }
 */