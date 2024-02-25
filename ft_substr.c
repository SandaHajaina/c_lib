/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sranaivo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 16:10:32 by sranaivo          #+#    #+#             */
/*   Updated: 2024/02/25 08:46:45 by sranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if ((start > ft_strlen(s)) || !s)
		return (0);
	i = 0;
	str = malloc((sizeof(char) * len) + 1);
	if (!str)
		return (0);
	while ((*(s + start) != '\0') && i < len)
	{
		*(str + i) = *(s + start);
		start++;
		i++;
	}
	*(str + i) = '\0';
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "hello world";
//    char *temp = ft_substr(str, 0, 5);
	printf("%s", ft_substr(str, 0, 5));
	return (0);
}
*/
