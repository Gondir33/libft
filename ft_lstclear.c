/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:09:14 by marvin            #+#    #+#             */
/*   Updated: 2021/10/05 13:09:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*swap;

	while ((*lst) != NULL)
	{
		del((*lst)->content);
		swap = (*lst);
		(*lst) = (*lst)->next;
		free(swap);
	}
}
