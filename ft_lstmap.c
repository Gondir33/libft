/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:02:26 by marvin            #+#    #+#             */
/*   Updated: 2021/10/05 14:02:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*swaplst;

	newlst = NULL;
	while (lst != NULL)
	{
		swaplst = ft_lstnew(f(lst->content));
		if (!swaplst)
			break ;
		ft_lstadd_back(&newlst, swaplst);
		lst = lst->next;
	}
	if (!swaplst)
	{
		while (!newlst)
		{
			del(newlst->content);
			swaplst = newlst;
			newlst = newlst->next;
			free(swaplst);
		}
		return (NULL);
	}
	return (newlst);
}
