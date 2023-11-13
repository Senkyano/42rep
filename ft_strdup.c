/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:22:27 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/13 15:10:22 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*copy;
	size_t	len;
	int		n;
	size_t	i;

	i = 0;
	len = ft_strlen(src);
	copy = malloc((len + 1) * sizeof(char));
	if (len == 0 && copy == NULL)
		return (0);
	while (i < len && src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
