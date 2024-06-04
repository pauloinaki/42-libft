/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppalma <ppalma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:21:17 by ppalma            #+#    #+#             */
/*   Updated: 2024/05/29 12:49:43 by ppalma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	resultado;
	int	signo;
	int	i;

	resultado = 0;
	i = 0;
	signo = 1;
	while ((str[i] >= 9) && (str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-')
	{
		signo = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		resultado = resultado * 10 + (str[i] - '0');
		i++;
	}
	return (signo * resultado);
}
/*
int main()
{
	const char	str[] = "a1s2d3";
	int			resultado;

	resultado = ft_atoi(str);
	printf("el string pasado por atoi es: '%s\n'", str);
	printf("resultado: %d", resultado);
	return(0);
}
*/