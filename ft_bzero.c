/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppalma <ppalma@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:21:23 by ppalma            #+#    #+#             */
/*   Updated: 2024/04/25 15:12:25 by ppalma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*
int main()
{
	char buffer[10] = "hola!";

	printf("Buffer antes de bzero: %s\n", buffer);

	ft_bzero(buffer, sizeof(buffer));

	printf("buffer despues de bzero: %s\n", buffer);

	return (0);
}
*/