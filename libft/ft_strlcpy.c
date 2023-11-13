/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:15:33 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/08 14:01:01 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	n;
	size_t	lensrc;

	lensrc = ft_strlen(src);
	n = 0;
	if (size != 0)
	{
		while (n < (size - 1) && src[n])
		{
			dest[n] = src[n];
			n++;
		}
	}
	dest[n] = '\0';
	return (lensrc);
}
