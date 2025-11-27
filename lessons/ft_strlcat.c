/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraus <laraus@student.lisboa42.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:37:59 by laraus            #+#    #+#             */
/*   Updated: 2025/11/27 17:35:19 by laraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	i;

	d = 0;
	s = 0;
	while (d < size && dst[d])
		d++;
	while (src[s])
		s++;
	if (d == size)
		return (s + size);
	i = 0;
	while (src[i] && ((d + i) < size - 1))
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (d + s);
}
/*
int	main(void)
{
	char dest1[20];
	const char src1[] = "Concatenation";
	ft_strlcat(dest1, src1, 14);
	printf("%s\n", dest1);
	return (0);
}
*/