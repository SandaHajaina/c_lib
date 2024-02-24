/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sranaivo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:31:00 by sranaivo          #+#    #+#             */
/*   Updated: 2024/02/23 11:31:04 by sranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "Geeks";
	char	str2[] = "xxx";

	puts("str1 before memcpy ");
	puts(str1);
	// Copies contents of str2 to str1
	ft_memcpy(str1, str2, sizeof(str2));
	puts("\nstr1 after memcpy ");
	puts(str1);
	return (0);
}
*/
