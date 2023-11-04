/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babonnet <babonnet@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:48:46 by babonnet          #+#    #+#             */
/*   Updated: 2023/11/02 16:35:25 by babonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int word_counts(const char *str, const char sep)
{
	int word;
	int i;

	i = 0;
	word = 0;
	while (str[i])
	{
		while (str[i] && str[i] == sep)
			i++;
		if (str[i])
			word++;
		while (str[i] && str[i] != sep)
			i++;
	}
	return (word);
}

static int strlen_split(const char *str, char sep)
{
	int i;

	i = 0;
	while (str[i] && str[i] == sep)
		i++;
	return (i);
}

char **ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		k;

	i = -1;
	k = 0;
	result = malloc((word_counts(s, c) + 1) * sizeof(char *));
	while (++i < word_counts(s, c))
	{
		j = 0;
		while (s[k] && s[k] == c)
			k++;
		result[i] = malloc((strlen_split(&s[k], c) + 1) * sizeof(char));
		while (s[k] && s[k] != c)
			result[i][j++] = s[k++];
		result[i][j] = 0;
	}
	result[i] = 0;
	return (result);
}
