/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonnet <bbonnet@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:01:25 by bbonnet           #+#    #+#             */
/*   Updated: 2023/11/05 19:50:45 by bbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
char *ft_strjoin(char const *s1, char const *s2)
{
	size_t length_s1;
	size_t length_s2;
	char  *dest;

	if (!s1)
		return (NULL);
	length_s1 = ft_strlen(s1);
	length_s2 = ft_strlen(s2);
	dest = malloc((length_s1 + length_s2 + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s1, length_s1 + 1);
	ft_strlcat(dest, s2, length_s1 + length_s2 + 1);
	return (dest);
}
