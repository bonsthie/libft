/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonnet <bbonnet@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 22:36:04 by bbonnet           #+#    #+#             */
/*   Updated: 2023/10/30 23:00:02 by bbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memset(void *str, int c, size_t n)
{
	unsigned char *str_cp;

	str_cp = (unsigned char *) str;
	while (n)
	{
		str_cp[n - 1] = c;
		n--;
	}
	return (str);
}
