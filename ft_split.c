/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sranaivo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:19:01 by sranaivo          #+#    #+#             */
/*   Updated: 2024/03/01 13:13:25 by sranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char const *str, char c)
{
	int	i;
	int	n;
	int	l;

	l = ft_strlen(str);
	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && str[i + 1] == c)
			n++;
		i++;
	}
	if (str[l - 1] != c)
		n++;
	return (n);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		w;

	str = malloc(sizeof(char *) * (count(s, c) + 1));
	if (!str)
		return (0);
	i = 0;
	w = 0;
	while (s[i])
	{
		j = 0;
		if (s[i] != c)
		{
			while ((s[i + j] != c) && (s[i + j] != 0))
				j++;
			str[w++] = ft_substr(s, i, j);
		}
		else
			i++;
		i += j;
	}
	str[w] = 0;
	return (str);
}
