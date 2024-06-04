/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppalma <ppalma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 14:40:10 by ppalma            #+#    #+#             */
/*   Updated: 2024/06/03 10:41:00 by ppalma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*auxiliar;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		auxiliar = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = auxiliar;
	}
}
