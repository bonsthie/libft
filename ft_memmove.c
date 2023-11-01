/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonnet <bbonnet@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:40:46 by bbonnet           #+#    #+#             */
/*   Updated: 2023/10/31 20:21:11 by bbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memmove(void *destination, const void *source, size_t num)
{
	unsigned char *src;
	unsigned char *dest;

	src = (unsigned char *) source;
	dest = (unsigned char *) destination;
	if (src == NULL && dest == NULL)
		return (destination);
	while (num)
	{
		dest[num - 1] = src[num - 1];
		num--;
	}
	return ((void *) dest);
}
