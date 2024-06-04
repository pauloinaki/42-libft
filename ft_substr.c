/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppalma <ppalma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 18:43:50 by ppalma            #+#    #+#             */
/*   Updated: 2024/06/03 13:01:19 by ppalma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		substr = (char *)malloc(1);
		if (substr == NULL)
			return (NULL);
		substr[0] = 0;
		return (substr);
	}
	if (len > s_len - start)
	{
		len = s_len - start;
	}
	substr = (char *)malloc(len + 1);
	if (substr == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
/*
int main(void)
{
	char *s = "testeo de substr";
	char *result;

	result = ft_substr(s, 7, 5);
	if (result == NULL)
	{
		printf("Error no funca: ft_substr returned NULL\n");
		return (1);
	}

	printf("Resultado: %s\n", result);

	free(result);

	return (0);
}*/