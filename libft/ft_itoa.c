/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 07:37:07 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/13 08:39:02 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nombredigit(int n)
{
	size_t	nbr;

	nbr = 1;
	if (n < 0)
	{
		nbr++;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		nbr++;
	}
	return (nbr);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	size_t	i;

	i = nombredigit(n);
	nbr = malloc((i + 1) * sizeof(char));
	if (!nbr)
		return (NULL);
	if (n < 0)
	{
		nbr[0] = '-';
		n = -n;
	}
	nbr[i] = '\0';
	i--;
	while (n > 0)
	{
		nbr[i] = (n % 10) + 48;
		n = (n / 10);
		i--;
	}
	return (nbr);
}
