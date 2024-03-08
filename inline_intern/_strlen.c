/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _strlen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babonnet <babonnet@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 21:31:10 by babonnet          #+#    #+#             */
/*   Updated: 2024/03/08 17:38:29 by babonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_int.h"

inline size_t _strlen(const char *str)
{
	const char		*orig_str;
	int				mask;
	__m256i			zero;
	__m256i			data;

	orig_str = str;
	while (*str && (uintptr_t)str & 31)
		str++;
	if (!*str)
		return (str - orig_str);
	zero = _mm256_setzero_si256();
	while (1)
	{
		data = _mm256_loadu_si256((const __m256i *)str);
		mask = _mm256_movemask_epi8(_mm256_cmpeq_epi8(data, zero));
		if (mask != 0)
			return (str - orig_str + __builtin_ctz(mask));
		str += 32;
	}
	return (str - orig_str);
}
