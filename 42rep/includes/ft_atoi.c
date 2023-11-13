/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:02:47 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/09 14:31:24 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *sr)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while (*sr == ' ' || *sr == '\n' || *sr == '\v' || *sr == '\t')
		sr++;
	if (*sr == '-' || *sr == '+')
	{
		if (*sr == '-')
			n = -1;
		sr++;
	}
	while (*sr >= '0' && *sr <= '9')
	{
		i = (i * 10) + (*sr - 48);
		sr++;
	}
	return (i * n);
}