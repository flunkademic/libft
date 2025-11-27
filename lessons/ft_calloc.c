/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraus <laraus@student.lisboa42.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:43:09 by laraus            #+#    #+#             */
/*   Updated: 2025/11/27 16:48:18 by laraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*pt;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	total = nmemb * size;
	pt = malloc(total);
	if (!pt)
		return (NULL);
	ft_bzero(pt, total);
	return (pt);
}
/*
int main(void)
{
	void *a = ft_calloc(0,0);
	void *b = ft_calloc(20,1);

	printf("a: %p\n", a);
	printf("b: %p\n", b);
	// printf("a - b: %lu\n\n", (a - b));

	if (b)
	{
		unsigned char *p = b;
		for (size_t i = 0; i < 20; i++)
			printf("%u ", p[i]);
		printf("\n");
	}

	unsigned char *p = b;

	for (size_t i = 0; i < 20; i++)
		printf("%p -> %u\n", p + i, p[i]);

	return 0;
}
*/