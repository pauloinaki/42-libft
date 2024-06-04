/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppalma <ppalma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:51:02 by ppalma            #+#    #+#             */
/*   Updated: 2024/05/29 13:46:04 by ppalma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	lenght;

	lenght = 0;
	while (s[lenght])
	{
		lenght++;
	}
	return (lenght);
}

/*
int main()
{
	char str[] = "Hola, mundo, estoy explicandole a patricia!";
	size_t length;

	length = ft_strlen(str);

	printf("La longitud de la cadena es de: %zu\n bytes", length);

	return (0);
}
*/