/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraus <laraus@student.lisboa42.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 16:41:02 by laraus            #+#    #+#             */
/*   Updated: 2025/11/06 14:39:51 by laraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

void	test_ft_isalpha(void)
{
	printf("=== test_ft_isalpha ===\n");
	
	// Test lowercase letters
	printf("Lowercase a-z: ");
	for (int c = 'a'; c <= 'z'; c++)
	{
		int	result = ft_isalpha(c);
		int	expected = !!isalpha(c);
		if (result != expected)
			printf("FAIL at '%c' (got %d, expected %d)\n", c, result, expected);
	}
	printf("OK\n");
	
	// Test uppercase letters  
	printf("Uppercase A-Z: ");
	for (int c = 'A'; c <= 'Z'; c++)
	{
		if (ft_isalpha(c) != 1)
			printf("FAIL at '%c'\n", c);
	}
	printf("OK\n");
	
	// Test non-alpha characters
	printf("Non-alpha: ");
	char	non_alpha[] = "0123456789!@#$ \t\n";
	for (int i = 0; non_alpha[i]; i++)
	{
		if (ft_isalpha(non_alpha[i]) != 0)
			printf("FAIL at '%c'\n", non_alpha[i]);
	}
	printf("OK\n");
	
	// Test edge cases
	printf("Edge cases: ");
	struct {
		int c;
		int expected;
	} edges[] = {
		{0, 0},      // NULL
		{128, 0},    // Extended ASCII
		{-1, 0},     // Negative
		{EOF, 0},    // End of file
		{'a' - 1, 0}, // Before 'a'
		{'z' + 1, 0}, // After 'z'
		{'A' - 1, 0}, // Before 'A' 
		{'Z' + 1, 0}  // After 'Z'
	};
	
	for (size_t i = 0; i < sizeof(edges)/sizeof(edges[0]); i++)
	{
		int	result = ft_isalpha(edges[i].c);
		if (result != edges[i].expected)
			printf("FAIL at %d (got %d, expected %d)\n", edges[i].c, result, edges[i].expected);
	}
	printf("OK\n");
}
