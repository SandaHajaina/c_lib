/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sranaivo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:53:31 by sranaivo          #+#    #+#             */
/*   Updated: 2024/02/22 11:05:01 by sranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp;
	size_t			i;

	if (!s)
		return (0);
	i = 0;
	tmp = (unsigned char *)s;
	while (i < n)
	{
		*(tmp + i) = (unsigned char)c;
		i++;
	}
	return (s);
}
