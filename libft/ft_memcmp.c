/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:14:34 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/13 07:57:01 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t size)
{
	size_t	i;

	i = 0;
	while (((char *)p1)[i] && ((char *)p2)[i] && i < size
			&& ((char *)p1)[i] == ((char *)p2)[i])
		i++;
	return (*(char *)(p1 + i) - ((char *)p2)[i]);
}
