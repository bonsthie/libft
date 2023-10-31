/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonnet <bbonnet@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:06:28 by bbonnet           #+#    #+#             */
/*   Updated: 2023/10/30 22:18:21 by bbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strchr(const char *str, int c)

{
	while (*str)
	{
		if (c == *str)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
