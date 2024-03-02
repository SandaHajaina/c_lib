/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sranaivo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 10:23:43 by sranaivo          #+#    #+#             */
/*   Updated: 2024/03/02 14:38:04 by sranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count(long n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		n = n * (-1);
		i = 1;
	}
	if (n == 0)
		i = 1;
	else
	{
		while (n != 0)
		{
			n = n / 10;
			i++;
		}
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	size;
	long	nb;
	int		is_negative;

	res = malloc(sizeof(char) * (count(n) + 1));
	if (!res)
		return (0);
	nb = (long)n;
	size = count(n);
	is_negative = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		res[0] = '-';
		is_negative = 1;
	}
	res[size] = '\0';
	while (size > (size_t)is_negative)
	{
		res[size - 1] = (nb % 10) + '0';
		nb = nb / 10;
		size--;
	}
	return (res);
}
