/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:51:21 by marvin            #+#    #+#             */
/*   Updated: 2021/10/04 18:51:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*little;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if ((size_t)start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - (size_t)start > len)
		little = malloc(len + 1);
	else
		little = malloc(ft_strlen(s) - (size_t)start + 1);
	if (!little)
		return (NULL);
	while (i < len && s[start])
	{
		little[i] = s[start];
		i++;
		start++;
	}
	little[i] = 0;
	return (little);
}
