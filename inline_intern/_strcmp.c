/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _strcmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babonnet <babonnet@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 21:45:14 by babonnet          #+#    #+#             */
/*   Updated: 2024/03/05 23:23:08 by babonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_int.h"
#include "../libft.h"

static inline int frv(int mask, const char *str1, const char *str2)
{
	int offset;

	offset =  __builtin_ctz(~mask);
	return (*(str1 + offset) - *(str2 + offset));
}

inline int _strcmp(const char *str1, const char *str2)
{
	__m256i	str1_256;
	__m256i	str2_256;
	int		mask;

	if (str1 == str2)
		return (0);
	while (*str1 && ((uintptr_t)str1 & 31)
		&& ((uintptr_t)str2)
		&& *str1 == *str2)
	{
		str1++;
		str2++;
	}
	while(1)
	{
		str1_256 = _mm256_loadu_si256((const __m256i *)str1);
		str2_256 = _mm256_loadu_si256((const __m256i *)str2);
		mask = _mm256_movemask_epi8(_mm256_cmpeq_epi8(str1_256, str2_256));
		if (mask != INT_MAX)
			return (frv(mask, str1, str2));
		str1 += 32;
		str2 += 32;
	}
}
