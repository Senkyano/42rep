/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:56:20 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/15 08:05:41 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur;
	t_list	*pre;

	cur = *lst;
	while (cur != NULL)
	{
		pre = cur;
		cur = cur->next;
		ft_lstdelone(pre, (*del));
	}
	*lst = NULL;
}
