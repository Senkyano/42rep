/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:15:48 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/15 08:04:40 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*cur;

	i = 0;
	cur = lst;
	if (!lst)
		return (i);
	while (cur != NULL)
	{
		cur = cur->next;
		i++;
	}
	return (i);
}
