/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppalma <ppalma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:09:23 by ppalma            #+#    #+#             */
/*   Updated: 2024/06/03 12:48:56 by ppalma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_countw(const char *str, char c);
static	char	**ft_free(char **str, int i);
static	int	ft_wlen(const char *str, char c);

static	char	**ft_free(char **str, int i)
{
	while (--i >= 0)
		free(str[i]);
	free(str);
	return (NULL);
}

static	int	ft_countw(const char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static	int	ft_wlen(const char *str, char c)
{
	int	len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}

char	**ft_split(const char *str, char c)
{
	char	**array;
	int		i;
	int		start;
	int		words;

	if (!str)
		return (NULL);
	words = ft_countw(str, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	i = 0;
	start = 0;
	while (i < words)
	{
		while (str[start] == c)
			start++;
		array[i] = ft_substr(str, start, ft_wlen(str + start, c));
		if (!array[i])
			return (ft_free(array, i));
		start += ft_wlen(str + start, c);
		i++;
	}
	array[i] = NULL;
	return (array);
}
/*
int main(void)
{
	char **result;
	int i;
	char *str = "Hola,esto,es,mi,libft";
	char delimiter = ',';

	result = ft_split(str, delimiter);
	if (result == NULL)
	{
		printf("Error: ft_split returned NULL\n");
		return (1);
	}

	for (i = 0; result[i] != NULL; i++)
	{
		printf("result[%d]: %s\n", i, result[i]);
		free(result[i]);
	}
	free(result);

	return (0);
}*/