/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:34:57 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/13 07:56:23 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	start;
	size_t	last;

	if (n < ft_strlen(dest))
		return (n + ft_strlen(src));
	start = 0;
	last = ft_strlen(dest);
	while (last + 1 < n && src[start] != '\0')
	{
		dest[last] = src[start];
		start++;
		last++;
	}
	dest[last] = '\0';
	return (ft_strlen(&src[start]) + ft_strlen(dest));
}
