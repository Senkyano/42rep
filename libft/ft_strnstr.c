/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:11:45 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/09 13:02:41 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!*s2)
		return (0);
	while (*s1 && i < n && n - i++ <= ft_strlen(s2))
	{
		if (ft_strncmp(s1, s2, ft_strlen(s2)) == 0)
			return ((char *)(s1 + i));
		s1++;
	}
	return (0);
}
