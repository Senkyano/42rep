/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:05:03 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/13 07:55:52 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t lenght)
{
	size_t	n;

	n = 0;
	while (first[n] != '\0' && second[n] != '\0' && n < lenght - 1
		&& first[n] == second[n])
	{
		n++;
	}
	return (first[n] - second[n]);
}
