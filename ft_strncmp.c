/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonnet <bbonnet@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:57:26 by bbonnet           #+#    #+#             */
/*   Updated: 2023/10/31 21:00:06 by bbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_strncmp(const char *first, const char *second, size_t length)
{
	size_t i;

	i = 0;
	if (length == 0)
		return (0);
	while (first[i] == second[i] && first[i] && first[i] != 0 && i < length - 1)
		i++;
	return ((unsigned char) first[i] - (unsigned char) second[i]);
}
