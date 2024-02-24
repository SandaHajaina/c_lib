/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sranaivo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 16:10:32 by sranaivo          #+#    #+#             */
/*   Updated: 2024/02/24 18:06:19 by sranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t  i;
    char    *str;

    i = 0;
    str = malloc((sizeof(char) * len) + 1);
	if (!str)
		return (0);
    while(i < len && *(s + 1) != 0)
        str[i++] = s[start++ - 1];
    str[i] = '\0';
    return(str);
}
/*
#include <stdio.h>

int main()
{
    char *str = "hello world";
    char *temp = ft_substr(str, 0, 5);
    printf("%s", temp);

    return 0;
}
*/
