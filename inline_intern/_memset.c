/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _memset.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babonnet <babonnet@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:28:42 by babonnet          #+#    #+#             */
/*   Updated: 2024/03/07 17:29:26 by babonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_int.h"

typedef unsigned char __attribute__((__may_alias__)) t_ptr;
typedef uint32_t __attribute__((__may_alias__)) u32;
typedef uint64_t __attribute__((__may_alias__)) u64;

inline void    _memeset(void *dest, int value, size_t len)
{
    t_ptr *ptr;
    __m256i vec_256;
    __m128i vec_128;
    u32 c32;
    u64 c64;

    ptr = dest;
    vec_256 = _mm256_set1_epi8((unsigned char)value);
    while ((uintptr_t)ptr & 31 && len > 0)
    {
        *ptr = (unsigned char)value;
        len--;
        ptr++;
    }
    while (len >= 32)
    {
        _mm256_storeu_si256((__m256i *)ptr, vec_256);
        len -= 32;
        ptr += 32;
    }
    if (len >= 16)
    {
        vec_128 = _mm_set1_epi8((unsigned char)value);
        _mm_storeu_si128((__m128i *)ptr, vec_128);
        ptr += 16;
        len -= 16;
    }
    if (len >= 4)
    {
        c32 = ((u32)-1)/255 * (unsigned char)value;
        if ( len >= 8)
        {
            c64 = c32 | ((u64)c32 << 32);
            *(u64 *)ptr = c64;
            len -= 8;
            ptr += 8;
        }
        if (len >= 4)
        {
            *(u32 *)ptr = c32;
            len -= 4;
            ptr += 4;
        }
    }
    while (len > 0)
    {
        *ptr = (unsigned char)value;
        ptr++;
        len--;
    }
}
