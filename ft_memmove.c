/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babonnet <babonnet@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:40:46 by bbonnet           #+#    #+#             */
/*   Updated: 2024/03/09 23:28:09 by babonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inline_intern/libft_int.h"
#include <stddef.h>

void	*ft_memmove(void *destination, const void *source, size_t num)
{
	return (_memmove(destination, source, num));
}
