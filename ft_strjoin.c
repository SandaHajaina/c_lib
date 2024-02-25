/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sranaivo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:55:38 by sranaivo          #+#    #+#             */
/*   Updated: 2024/02/25 16:56:58 by sranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (j < ft_strlen(s1))
		str[i++] = s1[j++];
	j = 0;
	while (j < ft_strlen(s2))
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*str;

	s1 = " ";
	s2 = "zord";
	str = ft_strjoin(s1, s2);
	printf("%s", str);
}
*/
