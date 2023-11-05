/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonnet <bbonnet@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:48:46 by babonnet          #+#    #+#             */
/*   Updated: 2023/11/05 01:58:49 by bbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void free_all(char **tab, int index)
{
    while (index--)
        free(tab[index]);
    free(tab);
}

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

static char *word_dupe(const char *s, char c, int *len)
{
	char *new;
	int new_len;
	int i;

    i = 0;
	while (s[i] && s[i] == c)
		i++;
	new_len = strlen_split(s + i, c) + 1;
	new = malloc(new_len * sizeof(char));
	if (!new)
        return (NULL);
    ft_strlcpy(new + i, s, new_len);
	*len += new_len;
	return (new);
}

char **ft_split(char const *s, char c)
{
	char **result;
	int    word_count;
	int    *len;
	int    i;

	if (!s)
		return (NULL);
	i = -1;
	len = 0;
	word_count = word_counts(s, c);
    result = ft_calloc(word_count + 1, sizeof(char *));
	while (++i < word_count)
	{
		result[i] = word_dupe(&s[i], c, len);
        if (!result[i])
        {
            free_all(result, word_count);
            return (NULL);
        }
	}
	return (result);
}
