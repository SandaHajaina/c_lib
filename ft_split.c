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

static size_t	count_word(const char *s, char c)
{
	size_t	nb_strings;

	nb_strings = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			while (*s != '\0' && *s != c)
				s++;
			nb_strings++;
			continue ;
		}
		s++;
	}
	return (nb_strings);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		word;

	str = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!str)
		return (0);
	i = 0;
	word = 0;
	while (s[i])
	{
		j = 0;
		if (s[i] != c)
		{
			while ((s[i + j] != c) && (s[i + j] != 0))
				j++;
			str[word++] = ft_substr(s, i, j);
		}
		else
			i++;
		i += j;
	}
	str[word] = 0;
	return (str);
}

/*
static size_t	count_strings(const char *s, char c)
{
	size_t	nb_strings;

	nb_strings = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			while (*s != '\0' && *s != c)
				s++;
			nb_strings++;
			continue ;
		}
		s++;
	}
	return (nb_strings);
}

static const char	*dup_until_c(char **dest, const char *src, char c)
{
	size_t	len;
	size_t	i;

	while (*src == c)
		src++;
	len = 0;
	while (src[len] != '\0' && src[len] != c)
		len++;
	*dest = (char *)malloc(sizeof(char) * (len + 1));
	if (*dest == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		(*dest)[i] = src[i];
		i++;
	}
	(*dest)[i] = '\0';
	src += len + 1;
	return (src);
}

static void	free_strs(char ***strs, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free((*strs)[i]);
		i++;
	}
	free(*strs);
	*strs = NULL;
}

char	**ft_split(const char *s, char c)
{
	char	**strs;
	size_t	nb_strings;
	size_t	i;

	nb_strings = count_strings(s, c);
	strs = (char **)malloc(sizeof(char *) * (nb_strings + 1));
	if (strs != NULL)
	{
		strs[nb_strings] = NULL;
		i = 0;
		while (i < nb_strings)
		{
			s = dup_until_c(strs + i, s, c);
			if (s == NULL)
			{
				free_strs(&strs, i);
				break ;
			}
			i++;
		}
	}
	return (strs);
}
*/
/*
static int	count_word(char const *str, char c)
{
	int	i;
	int	nb;
	int	len;

	len = ft_strlen(str);
	i = 0;
	nb = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && str[i + 1] == c)
			nb++;
		i++;
	}
	if (str[len - 1] != c)
		nb++;
	return (nb);
}
*/
