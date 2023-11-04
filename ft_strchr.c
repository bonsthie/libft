/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babonnet <babonnet@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:06:28 by bbonnet           #+#    #+#             */
/*   Updated: 2023/11/03 20:09:49 by babonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (c == *str)
			return ((char *) str);
		str++;
	}
	if (c == '\0')
		return ((char *) str);
	return (NULL);
}