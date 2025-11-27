/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraus <laraus@student.lisboa42.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:32:03 by laraus            #+#    #+#             */
/*   Updated: 2025/11/27 10:06:06 by laraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	uc;

	p = (unsigned char *)s;
	uc = (unsigned char)c;
	while (n--)
		*p++ = uc;
	return (s);
}
/*
int	main(void)
{
	char a[] = "Hello";
	char b[] = "Hello";

	memset(a, 'Z', 5);
	ft_memset(b, 'Z', 5);

	printf("n=5: %s | %s\n", a, b);

	// Initializing memory:
	char buf[100];
	ft_memset(buf, 0, sizeof(buf));
	for (size_t i = 0; i < sizeof(buf); i++)
		printf("%02X ", (unsigned char)buf[i]);
	printf("\n");

	return 0;
}
*/