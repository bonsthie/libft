/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_int.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babonnet <babonnet@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 21:33:27 by babonnet          #+#    #+#             */
/*   Updated: 2024/03/07 17:29:51 by babonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_INT_H
#define LIBFT_INT_H

#include <immintrin.h>
#include <stddef.h>
#include <stdint.h>

extern size_t _strlen(const char *str);
extern int _strcmp(const char *str1, const char *str2);
extern int _strncmp(const char *str1, const char *str2, size_t n);

extern void    _memeset(void *dest, int value, size_t len);

#endif
