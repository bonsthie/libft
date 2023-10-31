/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonnet <bbonnet@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:59:39 by bbonnet           #+#    #+#             */
/*   Updated: 2023/10/31 16:12:37 by bbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int memcmp(const void *ptr1, const void *ptr2, size_t num)
{
    unsigned char *ptr1_uc;
    unsigned char *ptr2_uc;
    size_t i;

    i = 0;
    ptr1_uc = (unsigned char*)ptr1;
    ptr2_uc = (unsigned char*)ptr2;
    while(ptr1_uc[i] == ptr2_uc[i] && i < num)
        i++;
    return ((int)(ptr1_uc[i] - ptr2_uc[i]));
}
