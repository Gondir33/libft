/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:51:05 by marvin            #+#    #+#             */
/*   Updated: 2021/10/04 18:51:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!src || !dest)
		return (0);
	while (size > 1 && src[i])
	{
		dest[i] = src[i];
		i++;
		size--;
	}
	if (size > 0)
		dest[i] = 0;
	return (ft_strlen(src));
}
