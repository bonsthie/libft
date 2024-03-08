/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babonnet <babonnet@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 22:36:04 by bbonnet           #+#    #+#             */
/*   Updated: 2024/03/08 17:54:05 by babonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inline_intern/libft_int.h"
#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	_memeset(str, c, n);
	return (str);
}
