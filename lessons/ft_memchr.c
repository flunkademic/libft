/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraus <laraus@student.lisboa42.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 20:25:14 by laraus            #+#    #+#             */
/*   Updated: 2025/11/25 12:24:44 by laraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	uc;

	i = 0;
	d = (unsigned char *)s;
	uc = (unsigned char)c;
	while (i < n)
	{
		if (d[i] == uc)
			return ((void *)(d + i));
		i++;
	}
	return (NULL);
}
