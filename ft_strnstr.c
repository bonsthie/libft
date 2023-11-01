/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonnet <bbonnet@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:15:25 by bbonnet           #+#    #+#             */
/*   Updated: 2023/10/31 21:35:24 by bbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
    if (!*little || !len)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			if (little[j + 1] == 0)
				return ((char *) &big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
