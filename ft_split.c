/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 07:40:37 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/13 18:21:41 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_word(char const *str, char c)
{
	size_t	i;
	size_t	nbrword;

	i = 0;
	nbrword = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c && str[i] != '\0')
			i++;
		if (str[i] != c)
			nbrword++;
		while (str[i] != c && str[i] != '\0')
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

char	**ft_split(char const *s, char c)
{
	size_t	nbrword;
	size_t	i;
	char	**sent;

	i = 0;
	nbrword = count_word(s, c);
	sent = malloc((nbrword + 1) * sizeof(char *));
	if (!sent)
		return (NULL);
	while (i < nbrword)
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != c)
			sent[i++] = ft_word(s, c);
		while (*s != c && *s != '\0')
			s++;
	}
	sent[i] = 0;
	return (sent);
}
