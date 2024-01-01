/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babonnet <babonnet@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 20:16:12 by babonnet          #+#    #+#             */
/*   Updated: 2024/01/01 20:16:49 by babonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>

int	ft_strncmp(const char *first, const char *second)
{
	size_t	i;

	i = 0;
	while (first[i] == second[i] && first[i])
		i++;
	return ((unsigned char) first[i] - (unsigned char) second[i]);
}
