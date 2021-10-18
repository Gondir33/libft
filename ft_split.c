/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:50:50 by marvin            #+#    #+#             */
/*   Updated: 2021/10/04 18:50:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_tabfree(char	**tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

size_t	ft_row(char const *s, char c)
{
	size_t	i;
	size_t	row;

	i = 0;
	row = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] && s[i + 1] == c)
			|| (s[i] != c && !s[i + 1]))
			row++;
		i++;
	}
	return (row);
}

char	**tabmalloc(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	len = ft_row(s, c);
	tab = malloc(sizeof(char *) * (len + 1));
	if (tab == NULL)
		return (NULL);
	while (i++ < len)
	{
		j = 0;
		while (*s == c)
			s++;
		while (*s != c && *s != 0)
		{
			s++;
			j++;
		}
		tab[i - 1] = malloc(sizeof(char) * (j + 1));
		if (tab[i - 1] == NULL)
			return (ft_tabfree(tab));
	}
	return (tab);
}

char	**tabfill(char const *s, char c, char **tab)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		while (s[i] != c && s[i] != 0)
			tab[k][j++] = s[i++];
		tab[k][j] = 0;
		k++;
	}
	tab[k] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = tabmalloc(s, c);
	if (!tab)
		return (NULL);
	return (tabfill(s, c, tab));
}
