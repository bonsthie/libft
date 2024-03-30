/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _memcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babonnet <babonnet@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 22:26:08 by babonnet          #+#    #+#             */
/*   Updated: 2024/03/10 00:11:03 by babonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_int.h"

inline void *_memcpy(void *dest, const void *src, size_t size)
{
	t_ptr *ptr_dest;
	const t_ptr *ptr_src;

	if (dest == src || !size)
		return (dest);
	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	while((uintptr_t)ptr_dest & 31 && size--)
		*ptr_dest++ = *ptr_src++;
	if (!size)
		return (dest);
	while (size >= 32)
	{
        _mm256_store_si256((__m256i *)ptr_dest, _mm256_loadu_si256((const __m256i *)ptr_src));
		ptr_src += 32;
		ptr_dest += 32;
		size -= 32;
	}
	while(size--)
		*ptr_dest++ = *ptr_src++;
	return (dest);
}
