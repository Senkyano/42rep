/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:32:22 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/09 16:35:45 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elcount, size_t elsize)
{
	void	*mem;
	size_t	len;

	if (elsize == 0 || elcount == 0)
		return (0);
	len = elcount * elsize;
	mem = malloc(len);
	if (!mem)
		return (0);
	ft_memset(mem, 0, len);
	return (mem);
}
