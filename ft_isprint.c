/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppalma <ppalma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:08:01 by ppalma            #+#    #+#             */
/*   Updated: 2024/05/29 13:42:07 by ppalma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*int main()
{
	char str1[] = "hola, mundo";
	
	if (ft_isprint(str1))
	{
		printf("el string \"%s\" contiene solo caracteres 
		imprimibles. \n", str1);
	}
	else
	{
		printf("el string \"%s\" contiene caracteres no imprimibles. \n", str1);
	}
	return (0);
}*/