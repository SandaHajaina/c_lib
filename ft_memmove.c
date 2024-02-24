/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sranaivo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 11:12:27 by sranaivo          #+#    #+#             */
/*   Updated: 2024/02/23 11:23:08 by sranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*t_src;
	char	*t_dest;
	size_t	i;

	if (!dest && !src)
		return (0);
	t_src = (char *)src;
	t_dest = (char *)dest;
	i = 0;
	if (t_dest > t_src)
		while (n-- > 0)
			t_dest[n] = t_src[n];
	else
		while (i++ < n)
			t_dest[i] = t_src[i];
	return (dest);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void) {

	// On crée une zone de mémoire de 10 entiers et contenant
	// que neuf valeurs. La dixième est non utilisée (0).
	int data[] = { 20, 30, 40, 50, 60, 70, 80, 90, 100, 0 };

	// On affiche le contenu de la collection
	for( int i=0; i<10; i++ ) {
		printf( "%d ", data[i] );
	}
	puts( "" );  // Un retour à la ligne

	// On décale les éléménts dans la collection ...
	void * source = (void *) data;
	void * destination = (void *) ( data + 2 );
	size_t size = 10 * sizeof( int );
	ft_memmove( destination, source, size );

	// ... pour y insérer une nouvelle valeur en tête
	data[0] = 10;

	// On affiche le contenu de la collection
	for( int i=0; i<10; i++ ) {
		printf( "%d ", data[i] );
	}
	puts( "" );  // Un retour à la ligne

	return (EXIT_SUCCESS);
}
*/
