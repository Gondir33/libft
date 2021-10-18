/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:50:58 by marvin            #+#    #+#             */
/*   Updated: 2021/10/04 18:50:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*news;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	news = malloc(len + 1);
	if (!news)
		return (NULL);
	while (i < len + 1)
	{
		news[i] = s[i];
		i++;
	}
	return (news);
}
