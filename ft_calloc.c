/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonnet <bbonnet@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 23:03:07 by bbonnet           #+#    #+#             */
/*   Updated: 2023/10/31 23:17:04 by bbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nitems, size_t size)
{
    void *dest;

    dest = malloc(nitems * size);
    if (!dest)
        return (NULL);
    ft_bzero(dest, nitems * size);
    return (dest);
}
