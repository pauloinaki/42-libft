/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppalma <ppalma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:21:23 by ppalma            #+#    #+#             */
/*   Updated: 2024/06/03 12:56:19 by ppalma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*string;

	i = 0;
	string = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	if (string == 0)
		return (NULL);
	while (s[i] != 0)
	{
		string[i] = (*f)(i, s[i]);
		i++;
	}
	string[i] = 0;
	return (string);
}
/*int main(void)
{
	const char *s = "Hello, world!";
	char *result;

	result = ft_strmapi(s, example_function);
	if (result == NULL)
	{
		printf("Error: ft_strmapi returned NULL\n");
		return (1);
	}

	printf("Result: %s\n", result);

	free(result);

	return (0);
}*/