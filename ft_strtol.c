/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babonnet <babonnet@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:24:46 by babonnet          #+#    #+#             */
/*   Updated: 2024/09/18 16:21:41 by bonsthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline int	ft_index(char *str, char c)
{
	char	*tmp;

	tmp = str;
	c = ft_toupper(c);
	while (*tmp && (ft_toupper(*tmp) != c))
		tmp++;
	if (!tmp)
		return (0);
	return (tmp - str);
}

static long long	__strtol(char *nptr, char **end_ptr, int base_size)
{
	static char	*base_s = "0123456789ABCDEF";
	long long	nb;
	int			i;
	int			sign;

	nb = 0;
	sign = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		sign = (int)2 * (0.5 - (*(nptr++) == '-'));
	while (*nptr)
	{
		i = ft_index(base_s, *nptr);
		if (i < 0 || i >= base_size)
			break ;
		nptr++;
		nb = nb * base_size + i;
	}
	if (end_ptr)
		*end_ptr = nptr;
	return (sign * nb);
}

long long	ft_strtoll(char *nptr, char **end_ptr, int base)
{
	if (!nptr || base > 16 || base < 0)
		return (0);
	if (!ft_strncmp(nptr, "0x", 2) && !base)
		return (__strtol(nptr + 2, end_ptr, 16));
	if (!ft_strncmp(nptr, "0b", 2) && !base)
		return (__strtol(nptr + 2, end_ptr, 2));
	return (__strtol(nptr, end_ptr, base));
}
