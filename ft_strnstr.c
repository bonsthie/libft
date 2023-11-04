/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babonnet <babonnet@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:15:25 by bbonnet           #+#    #+#             */
/*   Updated: 2023/11/03 19:21:13 by babonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;

    if (!little[0])
        return ((char*)big);
    if (len == 0)
        return (NULL);
    i = 0;
	while (big[i] && i + ft_strlen(little) <= len)
	{
		if (ft_strncmp(big + i, little, ft_strlen(little)) == 0)
			return ((char *) big + i);
		i++;
	}
	return (NULL);
}