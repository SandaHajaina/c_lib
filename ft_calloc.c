/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sranaivo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:15:01 by sranaivo          #+#    #+#             */
/*   Updated: 2024/02/25 14:18:04 by sranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	if (size != 0 && count > ((size_t)-1 / size))
		return (0);
	tmp = (void *)malloc(count * size);
	if (!tmp)
		return (0);
	i = 0;
	while (i < count * size)
		tmp[i++] = 0;
	return (tmp);
}
