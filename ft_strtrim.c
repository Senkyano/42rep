/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 07:42:43 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/13 18:06:00 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_diffletter(char src, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == src)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*new;
	
	start = 0;
	end = ft_strlen(s1) + 1;
	while (ft_diffletter(s1[start], set) == 1)
		start++;
	while (ft_diffletter(s1[end], set) == 1)
		end--;
	new = ft_substr(s1, start, end);
	return (new);
}
