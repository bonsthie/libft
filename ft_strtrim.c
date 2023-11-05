/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonnet <bbonnet@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:58:44 by babonnet          #+#    #+#             */
/*   Updated: 2023/11/05 02:09:54 by bbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{
	size_t start;
	size_t end;
	char  *dest;

    if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	if (!end)
		--end;
	while (ft_strchr(set, s1[end]))
		--end;
	while (ft_strchr(set, s1[start])&& s1[start])
		start++;
	if (start > end)
		return (ft_strdup(""));
	dest = malloc((end - start + 2) * sizeof(char));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, &s1[start], end - start + 2);
	return (dest);
}
