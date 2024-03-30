/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babonnet <babonnet@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:43:29 by bbonnet           #+#    #+#             */
/*   Updated: 2024/03/09 23:11:05 by babonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inline_intern/libft_int.h"
#include <stddef.h>

void	*ft_memcpy(void *destination, const void *source, size_t num)
{
	return (_memcpy(destination, source, num));
}
