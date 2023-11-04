/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babonnet <babonnet@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:03:57 by babonnet          #+#    #+#             */
/*   Updated: 2023/11/04 17:26:10 by babonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list **head;

	head = malloc(sizeof(t_list *));
	if (!head)
		return (NULL);
	while (lst)
	{
		ft_lstadd_front(head, ft_lstnew(f(lst->content)));
		if (!head)
		{
			ft_lstclear(head, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (*head);
}
