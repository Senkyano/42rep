/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:32:22 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/13 14:59:45 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elcount, size_t elsize)
{
	void	*mem;

	if (elsize > 0 && elcount > SIZE_MAX / elsize)
		return (NULL);
	mem = malloc(elcount * elsize);
	if (mem == NULL)
		return (0);
	ft_memset(mem, 0, elcount * elsize);
	return (mem);
}

