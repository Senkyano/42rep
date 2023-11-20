/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 07:03:28 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/15 13:23:04 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cur;
	t_list	*new;
	t_list	*cell;

	new = NULL;
	if (lst == NULL)
		return (NULL);
	cur = lst;
	while (cur != NULL)
	{
		cell = ft_lstnew((f)(cur->content));
		if (cell == NULL)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, cell);
		cur = cur->next;
	}
	return (new);
}
