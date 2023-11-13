/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 07:40:37 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/13 07:48:02 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_word(char const *str, char c)
{
	size_t	i;
	size_t	nbrword;

	i = 0;
	nbrword = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c)
			nbrword++;
		while (str[i] != c)
			i++;
	}
	return (nbrword);
}

char	*ft_word(char const *str, char c)
{
	size_t	i;
	char	*word;

	i = 0;
	while (str[i] != c)
		i++;
	word = malloc((i + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] != c)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *str, char c)
{
	size_t	nbrword;
	size_t	i;
	char	**sent;

	nbrword = count_word(str);
	sent = (char **)malloc(nbrword * sizeof(char *));
	if (!sent)
		return (NULL);
	i = 0;
	while (*str && i < nbrword)
	{
		while (*str == c)
			str++;
		if (*str != c)
			sent[i++] = ft_word(str, c);
		while (*str != c)
			str++;
	}
	return (sent);
}
