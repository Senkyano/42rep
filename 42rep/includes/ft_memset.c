/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:36:43 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/07 17:36:17 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pt, int value, size_t count)
{
	char	*s;

	s = pt;
	while (count > 0)
	{
		s[count - 1] = (unsigned char)value;
		count--;
	}
	return (s);
}
