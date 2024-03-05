/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sranaivo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 11:33:20 by sranaivo          #+#    #+#             */
/*   Updated: 2024/02/24 16:09:49 by sranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if ((ft_strlen(little) > ft_strlen(big)))
		return (0);
	if (little[0] == 0)
		return ((char *)big);
	i = 0;
	while (i <= len - (ft_strlen(little)) && (len > i))
	{
		if (ft_strncmp((char *)&big[i], little, ft_strlen(little)) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}
/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	int		a;
	char	s1[] = "iza le izy rse";
	char	s2[] = "le";

	printf("%s", strnstr(s1, s2, 4));
}
*/
