/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 07:43:24 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/13 17:45:58 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *dest;
    size_t i;

    i = 0;
    if (ft_strlen(s) < start)
    {
        dest = malloc(1);
        if (!dest)
            return (NULL);
        dest[0] = '\0';
        return (dest);
    }
    if (ft_strlen(s) - start < len)
        len = ft_strlen(s) - start;
    dest = malloc(sizeof(char) * (len + 1));
    if (!dest)
        return (NULL);
    while (s[start + i] != '\0' && i < len)
    {
        dest[i] = s[start + i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
