/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonnet <bbonnet@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:32:40 by bbonnet           #+#    #+#             */
/*   Updated: 2023/10/31 20:42:05 by bbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
	char  *last;
	size_t i;

	i = 0;
	last = NULL;
	if (c == '\0')
		return ((char *) &str[ft_strlen(str)]);

	while (str[i])
	{
		if (str[i] == c)
			last = (char *) &str[i];
		i++;
	}
	return (last);
}
