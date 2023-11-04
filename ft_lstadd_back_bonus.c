/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babonnet <babonnet@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:36:41 by babonnet          #+#    #+#             */
/*   Updated: 2023/11/03 17:53:22 by babonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (!*lst)
        *lst = new;
    ft_lstlast(*lst)->next = new;    
    new->next = NULL;
}
