/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sranaivo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:20:13 by sranaivo          #+#    #+#             */
/*   Updated: 2024/02/25 14:54:32 by sranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;

	str = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!str)
		return (0);
	i = 0;
	while (i < ft_strlen(s))
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s;
	char	*res;

	s = "hello word;";
	res = ft_strdup(s);
	printf("%s", res);
	return (0);
}
*/
