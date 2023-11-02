/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babonnet <babonnet@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:48:46 by babonnet          #+#    #+#             */
/*   Updated: 2023/11/02 14:13:06 by babonnet         ###   ########.fr       */
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

static size_t strldup(char *dest, const char *s, size_t size)
{
	dest = malloc((size + 1) * sizeof(char));
	if (!dest)
		return (-1);
	ft_strlcpy(dest, s, size + 1);
	return size;
}

char **ft_split(char const *s, char c)
{
	char **result;
	size_t word_count;
	size_t i;
	size_t j;

    word_count = word_counts(s, c);
    result = malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (i < word_count)
	{
		while (s[j] != c)
			j++;
		j += strldup(result[i], &s[j], strlen_split(&s[j], c));
		i++;
	}
	result[i][j] = 0;
	return (result);
}

int main()
{
	char   test[] = "commet ca va la team   ";
	char   sep = ' ';
	char **result = ft_split(test, sep);
	for (int i = 0; i < 5; i++)
		printf("%s\n", result[i]);
	return 1;
}
