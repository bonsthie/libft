/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonnet <bbonnet@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:59:39 by bbonnet           #+#    #+#             */
/*   Updated: 2023/10/31 20:48:09 by bbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
    const unsigned char *ptr1_uc;
    const unsigned char *ptr2_uc;
    size_t i;

    i = 0;
    ptr1_uc = (const unsigned char*)ptr1;
    ptr2_uc = (const unsigned char*)ptr2;
    while(i < num)
    {
        if (ptr1_uc[i] != ptr2_uc[i])
            return ((int)(ptr1_uc[i] - ptr2_uc[i]));
        i++;
    }
    return (0);
}
