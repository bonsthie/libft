/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _strncmp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babonnet <babonnet@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 22:12:56 by babonnet          #+#    #+#             */
/*   Updated: 2024/03/08 17:40:48 by babonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "libft_int.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static inline int	frv(int mask, int mask_zeros, const char *str1, const char *str2, size_t n)
{
	int	offset;
	int	end_string;

	end_string = __builtin_ctz(mask_zeros);
	offset = __builtin_ctz(mask);
	if (end_string < offset)
		return (*(unsigned char *)(str1 + end_string) - *(unsigned char *)(str2
				+ end_string));
	if (n <= (size_t)offset)
		return (0);
	return (*(unsigned char *)(str1 + offset) - *(unsigned char *)(str2 + offset));
}

inline int	_strncmp(const char *str1, const char *str2, size_t n)
{
	__m256i	str1_256;
	__m256i	str2_256;
	__m256i	zeros;
	int		mask;
	int		mask_zeros;

	if (n == 0)
		return (0);
	while (*str1 && n != 1 && (uintptr_t)str1 & 31 && *str1 == *str2)
	{
		str1++;
		str2++;
		n--;
	}
	if (!*str1 || !*str2 || *str2 != *str1 || n == 1)
		return (*(unsigned char *)str1 - *(unsigned char *)str2);
	zeros = _mm256_setzero_si256();
	while (n > 0)
	{
		str1_256 = _mm256_loadu_si256((const __m256i *)str1);
		str2_256 = _mm256_loadu_si256((const __m256i *)str2);
		mask_zeros = _mm256_movemask_epi8(_mm256_cmpeq_epi8(str1_256, zeros));
		mask = ~_mm256_movemask_epi8(_mm256_cmpeq_epi8(str1_256, str2_256));
		if (mask || mask_zeros)
			return (frv(mask, mask_zeros, str1, str2, n));
		str1 += 32;
		str2 += 32;
		n -= 32;
	}
	return (0);
}
