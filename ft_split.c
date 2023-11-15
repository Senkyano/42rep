/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 07:40:37 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/14 09:23:43 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char const *s, char c)
{
	int	nbrword;
	int	in;

	nbrword = 0;
	in = 0;
	while (*s != '\0')
	{
		if (*s != c && in == 0)
		{
			in = 1;
			nbrword++;
		}
		if (*s == c)
			in = 0;
		s++;
	}
	return (nbrword);
}

char	*ft_word(char const *s, int start, int end)
{
	char	*word;
	int		i;

	word = malloc(((end - start) + 1) * sizeof(char));
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**sent;
	size_t	i;
	size_t	j;
	int		start;

	sent = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!s || !sent)
		return (0);
	i = 0;
	start = -1;
	j = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			sent[j++] = ft_word(s, start, i);
			start = -1;
		}
		i++;
	}
	sent[j] = 0;
	return (sent);
}
