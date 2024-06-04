/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppalma <ppalma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 18:34:16 by ppalma            #+#    #+#             */
/*   Updated: 2024/06/03 12:59:44 by ppalma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	strat;
	size_t	end;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		strat = 0;
		end = ft_strlen(s1);
		while (s1[strat] && ft_strchr(set, s1[strat]))
			strat++;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > strat)
			end--;
		str = (char *)malloc(sizeof(char) * (end - strat + 1));
		if (str)
			ft_strlcpy(str, &s1[strat], end - strat + 1);
	}
	return (str);
}
/*
int main(void)
{
	char *s1 = "   testeodelafuncion   ";
	char *set = " ";
	char *result;

	result = ft_strtrim(s1, set);
	if (result == NULL)
	{
		printf("Error: ft_strtrim es NULL\n");
		return (1);
	}

	printf("Resultado: '%s'\n", result);

	free(result);

	return (0);
}*/