/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppalma <ppalma@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:24:20 by ppalma            #+#    #+#             */
/*   Updated: 2024/04/25 15:31:53 by ppalma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	value;
	size_t			i;

	ptr = (unsigned char *)b;
	value = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		ptr[i] = value;
		i++;
	}
	return (b);
}

/*
int main()
{
	char str[50] = "Testeo de Memset ";
	
	printf("Antes de memset: %s\n", str);

	memset(str, '*', 5);

	printf("Despues de Memset: %s\n", str);

	return (0);
}
*/