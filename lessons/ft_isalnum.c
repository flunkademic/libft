/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraus <laraus@student.lisboa42.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:11:11 by laraus            #+#    #+#             */
/*   Updated: 2025/11/25 09:41:40 by laraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
int main(void)
{
	int arr[] = {'a', 'Z', 'A', 'z', 'M', 'q', '0', '9', '@', ' ', '\n',-1, EOF};

	int arr_size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < arr_size; i++)
	{
		int c = arr[i];
		printf("'%c' (%d) -> %d\n", 
			(c >= 32 && c < 127) ? c : '.', c, ft_isalnum(c));
	}

	return (0);
}
*/