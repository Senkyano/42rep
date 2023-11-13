/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:30:36 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/08 13:28:32 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	size_t	st;

	st = 0;
	if (dest == src || !num)
		return (dest);
	if (dest < src)
	{
		while (st < num)
		{
			*((char *)dest + st) = *((char *)src + st);
			st++;
		}
	}
	else
	{
		while (!num)
		{
			*((char *)dest + num - 1) = *((char *)src + num - 1);
			num--;
		}
	}
	return (dest);
}
