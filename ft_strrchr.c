/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:42:22 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/15 11:58:38 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int srchr)
{
	char const	*pt;

	pt = (str + ft_strlen(str));
	while (pt >= str)
	{
		if (*pt == (char)srchr)
			return ((char *)pt);
		pt--;
	}
	return (0);
}
