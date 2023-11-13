/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:42:00 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/08 17:14:10 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memblock, int srch, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (((char *)memblock)[i] == (char)srch)
			return ((void *)(memblock + i));
		i++;
	}
	return (0);
}
