/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonnet <bbonnet@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:48:46 by babonnet          #+#    #+#             */
/*   Updated: 2023/11/06 03:27:48 by bbonnet          ###   ########.fr       */
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
	while (str[i] && str[i] != sep)
		i++;
	return (i);
}

void free_all(char **strs, int word_count)
{
	while (word_count)
		free(strs[word_count--]);
	free(strs);
}

char **ft_split(char const *s, char c)
{
	char **result;
	int    word_count;
	int    i;
	int    j;
	int    k;

	if (!s)
		return (NULL);
	i = -1;
	k = 0;
	word_count = word_counts(s, c);
	result = malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (++i < word_count)
	{
		j = 0;
		while (s[k] && s[k] == c)
			k++;
		result[i] = malloc((strlen_split(&s[k], c) + 1) * sizeof(char));
		if (!result[i])
		{
			free_all(result, word_count);
			return (NULL);
		}
		while (s[k] && s[k] != c)
			result[i][j++] = s[k++];
		result[i][j] = 0;
	}
	result[i] = NULL;
	return (result);
}
