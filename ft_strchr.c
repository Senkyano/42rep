/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:15:37 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/13 11:47:27 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int srchr)
{
	while (*src || *src == (char)srchr)
	{
		if (*src == (char)srchr)
			return ((char *)src);
		src++;
	}
	return (NULL);
}
