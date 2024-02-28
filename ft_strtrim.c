/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sranaivo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 16:57:39 by sranaivo          #+#    #+#             */
/*   Updated: 2024/02/27 09:15:40 by sranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	f_count(char const *str, char const *set)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != 0)
	{
		j = 0;
		while (set[j] != 0)
		{
			if (str[i] == set[j])
				c++;
			j++;
		}
		i++;
		if (i != c)
			return (c);
	}
	return (c);
}

static int	b_count(char const *str, char const *set)
{
	int	i;
	int	j;
	int	y;
	int	c;

	i = ft_strlen(str) - 1;
	c = 0;
	y = 0;
	while (i >= 0)
	{
		j = ft_strlen(set) - 1;
		while (j >= 0)
		{
			if (str[i] == set[j])
				c++;
			j--;
		}
		i--;
		y++;
		if (y != c)
			return (c);
	}
	return (c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		nb;

	i = f_count(s1, set);
	j = b_count(s1, set);
	nb = ft_strlen(s1) - (i + j);
	str = malloc(sizeof(char) * nb + 1);
	if (!str)
		return (0);
	j = 0;
	while (j < nb)
	{
		str[j] = s1[i];
		j++;
		i++;
	}
	str[j] = 0;
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "x xsxfxsx";
	printf("%s", ft_strtrim(str, "fx "));
	return (0);
}
*/
