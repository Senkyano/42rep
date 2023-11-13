/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:11:47 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/09 09:37:33 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void	*src, size_t num)
{
	int		i;
	char	*des;
	char	*sr;

	i = 0;
	des = (char *)dest;
	sr = (char *)src;
	while (sr[i] && i < num)
	{
		des[i] = sr[i];
		i++;
	}
	return (des);
}
