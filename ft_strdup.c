/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppalma <ppalma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 18:38:19 by ppalma            #+#    #+#             */
/*   Updated: 2024/06/03 12:46:09 by ppalma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*string;
	int		i;

	i = 0;
	string = (char *)malloc(sizeof(char) * ft_strlen(s1) +1);
	if (!string)
		return (NULL);
	while (s1[i] != 0)
	{
		string[i] = s1[i];
		i++;
	}
	string[i] = 0;
	return (string);
}
/*
int main(void)
{
	char *s1 = "Hello, world!";
	char *result;

	result = ft_strdup(s1);
	if (result == NULL)
	{
		printf("Error: ft_strdup returned NULL\n");
		return (1);
	}

	printf("Result: %s\n", result);

	free(result);

	return (0);
}*/