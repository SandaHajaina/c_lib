/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sranaivo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:09:24 by sranaivo          #+#    #+#             */
/*   Updated: 2024/03/09 14:10:01 by sranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*element;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	res = NULL;
	while (lst)
	{
		content = f(lst->content);
		element = ft_lstnew(content);
		if (!element)
		{
			ft_lstclear(&res, del);
			free(content);
			return (NULL);
		}
		ft_lstadd_back(&res, element);
		lst = lst->next;
	}
	return (res);
}
