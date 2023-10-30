/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonnet <bbonnet@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:32:40 by bbonnet           #+#    #+#             */
/*   Updated: 2023/10/30 22:18:22 by bbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

char *ft_strrchr(const char *str, int c)
{
    char *last;
    size_t i;

    i = 0;
    last = NULL;
    while (str[i])
    {
        if (str[i] == c)
            last = (char*)&str[i];
        i++;
    }
    return (last);
}
