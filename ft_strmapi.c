/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:49:58 by marvin            #+#    #+#             */
/*   Updated: 2021/10/05 11:49:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*news;
	unsigned int	i;
	unsigned int	len;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	news = malloc(len + 1);
	if (!news)
		return (NULL);
	while (i < len)
	{
		news[i] = f(i, s[i]);
		i++;
	}
	news[i] = '\0';
	return (news);
}
