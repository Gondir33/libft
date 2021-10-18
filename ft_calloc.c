/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:49:55 by marvin            #+#    #+#             */
/*   Updated: 2021/10/04 18:49:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if (!size || !nmemb)
	{
		nmemb = 1;
		size = 1;
	}
	arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, size * nmemb);
	return (arr);
}
