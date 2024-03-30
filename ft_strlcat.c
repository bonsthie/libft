/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babonnet <babonnet@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:18:52 by bbonnet           #+#    #+#             */
/*   Updated: 2024/03/13 18:07:15 by babonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "inline_intern/libft_int.h"

size_t	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	if (!size)
		return (_strlen(src));
	i = 0;
	dest_len = _strlen(dest);
	src_len = _strlen(src);
	if (dest_len >= size)
		return (src_len + size);
	while (src[i] && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = 0;
	return (dest_len + src_len);
}
