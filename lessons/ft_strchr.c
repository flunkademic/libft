/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraus <laraus@student.lisboa42.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:09:58 by laraus            #+#    #+#             */
/*   Updated: 2025/11/27 17:42:38 by laraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char test_str[] = "Something";
	int c = 'a';
	char *my_result = ft_strchr(test_str, c);
	printf("%p\n", my_result);

	c = 'o';
	char *my_result2 = ft_strchr(test_str, c);
	printf("%p   %c\n", my_result2, *my_result2);

	const char test_str_empty[] = "";
	char *my_result_empty = ft_strchr(test_str_empty, c);

	if (my_result_empty)
		printf("%p  %c\n", my_result_empty, *my_result_empty);
	else
		printf("Character not found (NULL returned)\n");

	return (0);
}
*/