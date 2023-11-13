/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:42:22 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/08 16:04:32 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int srchr)
{
	while (*str)
		str++;
	while (*str)
	{
		if (*str == (char)srchr)
			return ((char *)str);
		str--;
	}
	return (0);
}
