/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonnet <bbonnet@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:18:52 by bbonnet           #+#    #+#             */
/*   Updated: 2023/10/31 17:20:53 by bbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while(dest[i] && i < size)
		i++;
	while (dest[i + j] && i < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if ((i + j) < size)
		dest[i + j] = 0;
	j = ft_strlen(src);
	return(i + j);
}
