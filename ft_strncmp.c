/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babonnet <babonnet@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:57:26 by bbonnet           #+#    #+#             */
/*   Updated: 2024/03/05 22:52:14 by babonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "inline_intern/libft_int.h"

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	return (_strncmp(first, second, length));
}
