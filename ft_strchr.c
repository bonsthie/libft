/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonnet <bbonnet@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:06:28 by bbonnet           #+#    #+#             */
/*   Updated: 2023/11/05 00:47:22 by bbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    unsigned char uc;

    uc = (unsigned char)c;
	while (*str)
	{
		if (uc == *str)
			return ((char *) str);
		str++;
	}
	if (uc == '\0')
		return ((char *) str);
	return (NULL);
}
