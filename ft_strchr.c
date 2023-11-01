/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonnet <bbonnet@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:06:28 by bbonnet           #+#    #+#             */
/*   Updated: 2023/10/31 20:40:18 by bbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
	if (c == '\0')
		return ((char *) &str[ft_strlen(str)]);
	while (*str)
	{
		if (c == *str)
			return ((char *) str);
		str++;
	}
	return (NULL);
}
