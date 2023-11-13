/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:14:34 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/13 11:36:42 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t size)
{
	size_t	i;

	i = 0;
	if (!p1 && !p2)
		return (0);
	while (i < size)
	{
		if (((char *)p1)[i] != ((char *)p2)[i])
			return (*(unsigned char *)(p1 + i) - ((unsigned char *)p2)[i]);
		i++;
	}
	return (0);
}
