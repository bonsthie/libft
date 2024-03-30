/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _memmove.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babonnet <babonnet@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 22:12:42 by babonnet          #+#    #+#             */
/*   Updated: 2024/03/09 23:25:47 by babonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_int.h"

inline void *_memmove(void *dest, const void *src, size_t size)
{
	t_ptr *ptr_dest;
	t_ptr *ptr_src;

	if (dest == src)
		return (dest);
	if (src > dest)
		return (_memcpy(dest, src, size));
	ptr_dest = (unsigned char *)dest + size;
	ptr_src = (unsigned char *)src + size;
	while((uintptr_t)ptr_dest & 31 && size--)
		*ptr_dest-- = *ptr_src--;
	if (!size)
		return (dest);
	while (size >= 32)
	{
		*(__m256i *)ptr_dest = *(__m256i *)ptr_src;
		ptr_dest -= 32;
		ptr_src -= 32;
		size -= 32;
	}
	while(size--)
		*ptr_dest-- = *ptr_src--;
	return (dest);
}
