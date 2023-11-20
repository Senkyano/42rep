/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 07:37:07 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/15 15:57:12 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nombredigit(long int n)
{
	int	nbr;

	nbr = 0;
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
	nbr++;
	return (nbr);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	size_t	i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
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
	while (n > 9)
	{
		nbr[i] = (n % 10) + '0';
		n = (n / 10);
		i--;
	}
	nbr[i] = (n % 10) + '0';
	return (nbr);
}
