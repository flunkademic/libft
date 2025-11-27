/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraus <laraus@student.lisboa42.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:23:43 by laraus            #+#    #+#             */
/*   Updated: 2025/11/27 16:36:33 by laraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char b_test[] = "Initialized momofo";
	const char l_test[] = "mofo";
	// char *my_res = ft_strnstr(b_test, l_test, 10);
	// int i = 0;
	// printf("%p %c\n", my_res, my_res[i]);

	// printf("\n\n\n");
	// for (size_t i = 0; i < strlen(l_test); i++)
	// 	printf("%p %c \n", (void *)&my_res[i], my_res[i]);

	char *my_res = ft_strnstr(b_test, l_test, 10);

	if (my_res)
	{
		for (size_t i = 0; i < strlen(l_test); i++)
			printf("%p %c \n", (void *)&my_res[i], my_res[i]);
	}
	else
	{
		printf("Substring not found within first 10 bytes.\n");
	}

	return (0);
}
*/