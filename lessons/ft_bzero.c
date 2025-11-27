/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraus <laraus@student.lisboa42.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:28:38 by laraus            #+#    #+#             */
/*   Updated: 2025/11/27 16:47:25 by laraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int main(void)
{
	unsigned char test1[20];
	unsigned char test2[20];

	// Garbage first FOR differences show
	ft_memset(test1, 0xAA, 20);
	ft_memset(test2, 0xAA, 20);

	printf("My initial array:    ");
	for (int i = 0; i < 20; i++)
		printf("%d ", test1[i]);
	printf("\n");

	ft_bzero(test1, 20);
	bzero(test2, 20);

	printf("My ft_bzero:    ");
	for (int i = 0; i < 20; i++)
		printf("%d ", test1[i]);
	printf("\n");

	printf("Standard bzero: ");
	for (int i = 0; i < 20; i++)
		printf("%d ", test2[i]);
	printf("\n");
	return 0;
}
*/