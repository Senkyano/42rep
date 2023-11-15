/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:14:04 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/14 10:07:45 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*obj;

	obj = (t_list *)malloc(sizeof(t_list));
	if (!obj)
		return (0);
	obj->content = content;
	obj->next = 0;
	return (obj);
}
