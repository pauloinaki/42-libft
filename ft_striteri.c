/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppalma <ppalma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:01:14 by ppalma            #+#    #+#             */
/*   Updated: 2024/06/03 12:55:19 by ppalma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*

void ejemplo(unsigned int index, char *c)
{
	*c = *c + index;
}

int main(void)
{
	char str[] = "testeo de striteri!";

	ft_striteri(str, ejemplo);
	printf("Resultado: %s\n", str);

	return (0);
}*/