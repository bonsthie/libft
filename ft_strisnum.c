/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babonnet <babonnet@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:50:42 by babonnet          #+#    #+#             */
/*   Updated: 2024/02/10 17:23:51 by babonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strisnum(char *str)
{
	if (*str && (*str == '-' || *str == '+'))
		str++;
	while (*str)
	{
		if (!ft_isalnum(*str))
			return (0);
		str++;
	}
	return (1);
}
