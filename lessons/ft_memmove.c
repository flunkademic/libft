/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraus <laraus@student.lisboa42.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:09:22 by laraus            #+#    #+#             */
/*   Updated: 2025/11/27 15:20:06 by laraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest == src)
		return (dest);
	if (dest < src)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}
/*
int main(void)
{
	printf("=== STRING COPY ===\n");
	unsigned char dest1[20];
	unsigned const char src1[] = "Raw bytes";
	unsigned char *my_result1 = ft_memmove(dest1, src1, 7);
	for (int i = 0; i < 7; i++)
		printf("i: %d %c\n", i, my_result1[i]);
	printf("\n");

	printf("=== OVERLAP FORWARD ===\n");
	unsigned char dest2[] = "Something to move";
	ft_memmove(dest2, dest2 + 2, 10);
	for (int i = 0; i < 10; i++)
		printf("%c", dest2[i]);
	printf("\n\n");

	printf("=== OVERLAP BACKWARD ===\n");
	unsigned char buf[] = "1234567890";
	ft_memmove(buf + 2, buf, 5);
		printf("%s", buf);
	printf("\n\n");

	printf("=== RAW BYTES ===\n");
	unsigned char raw[5] = {0, 255, 128, 64, 32};
	unsigned char dest_raw[5];
	ft_memmove(dest_raw, raw, 5);
	for (int i = 0; i < 5; i++)
		printf("%d ", dest_raw[i]);
	printf("\n\n");

	printf("=== INT ARRAY ===\n");
	int src_ints[5] = {1, 2, 3, 4, 5};
	int dest_ints[5] = {0};
	ft_memmove(dest_ints, src_ints, 5 * sizeof(int));
	for (int i = 0; i < 5; i++)
		printf("%d ", dest_ints[i]);
	printf("\n\n");

	return 0;
}
*/