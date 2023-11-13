/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 07:43:24 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/13 07:43:28 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;
	int		i;

	cpy = malloc(len * sizeof(char));
	if (!cpy)
		return (NULL);
	while (s[i] && i < len)
	{
		cpy[i] = s[i + start];
		i++;
	}
	return (cpy);
}
