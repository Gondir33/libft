/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:49:40 by marvin            #+#    #+#             */
/*   Updated: 2021/10/04 18:49:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numatoi(const char *nptr, int flag)
{
	int	n;

	n = 0;
	if (flag == 1)
	{
		while (*nptr >= '0' && *nptr <= '9')
		{
			if (n < 0)
				return (-1);
			n = (*nptr - 48) + n * 10;
			nptr++;
		}
	}
	else
	{
		while (*nptr >= '0' && *nptr <= '9')
		{
			if (n > 0)
				return (0);
			n = n * 10 - (*nptr - 48);
			nptr++;
		}
	}
	return (n);
}

int	ft_atoi(const char *nptr)
{
	int		flag;

	flag = 1;
	while ((*nptr > 8 && *nptr < 14) || *nptr == 32)
		nptr++;
	if (*nptr == '-')
	{
		flag = -1;
		nptr++;
	}
	else if (*nptr == '+')
	{
		flag = 1;
		nptr++;
	}
	return (ft_numatoi(nptr, flag));
}
