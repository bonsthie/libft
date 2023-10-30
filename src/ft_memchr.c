/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonnet <bbonnet@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 23:25:03 by bbonnet           #+#    #+#             */
/*   Updated: 2023/10/30 23:35:34 by bbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void *memchr(const void *str, int c, size_t n)
{
    size_t i;
    void *str_cp;

    i = 0;
    str_cp = (void*)str;
    while(n - i > 0)
    {
        if (str_cp[i] == (void)c)
            return(&str_cp[i]);
    }
    return (str_cp);
}
