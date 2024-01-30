/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babonnet <babonnet@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:36:03 by babonnet          #+#    #+#             */
/*   Updated: 2024/01/30 16:51:14 by babonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isint(char *nb)
{
	long long ll_nb;

	if (ft_strlen(nb) >= 11)
		return (0);
	ll_nb = ft_atoll(nb);
		return (0);
	return (ll_nb >= INT_MIN && ll_nb <= INT_MAX);
}
