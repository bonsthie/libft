/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonnet <bbonnet@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:57:26 by bbonnet           #+#    #+#             */
/*   Updated: 2023/10/30 22:21:20 by bbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

int ft_strncmp( const char * first, const char * second, size_t length )
{
    size_t i;

    i = 0;
    while(first[i] == second[i] && first[i] && (length - 1 - i) > 0)
        i++;
    return(first[i] - second[i]);
}
