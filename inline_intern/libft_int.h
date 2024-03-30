/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_int.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babonnet <babonnet@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 21:33:27 by babonnet          #+#    #+#             */
/*   Updated: 2024/03/09 23:26:08 by babonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_INT_H
#define LIBFT_INT_H

#include <immintrin.h>
#include <stddef.h>
#include <stdint.h>

typedef unsigned char __attribute__((__may_alias__)) t_ptr;
typedef uint32_t __attribute__((__may_alias__)) u32;
typedef uint64_t __attribute__((__may_alias__)) u64;

extern size_t _strlen(const char *str);
extern int _strcmp(const char *str1, const char *str2);
extern int _strncmp(const char *str1, const char *str2, size_t n);

extern void    _memeset(void *dest, int value, size_t len);
extern void *_memcpy(void *dest, const void *src, size_t size);
extern void *_memmove(void *dest, const void *src, size_t size);

#endif
