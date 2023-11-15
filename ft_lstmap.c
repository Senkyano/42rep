/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 07:03:28 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/15 08:00:19 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cur;
	t_list	*new;
	t_list	*cell;

	if (!lst || !f || !del)
		return (NULL);
	cur = lst;
	new = NULL;
	while (cur != NULL)
	{
		cell = ft_lstnew((f)(cur->content));
		if (cell == NULL)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_front(&new, cell);
		cur = cur->next;
	}
	return (new);
}
