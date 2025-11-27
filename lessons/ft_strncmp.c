/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraus <laraus@student.lisboa42.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 20:09:30 by laraus            #+#    #+#             */
/*   Updated: 2025/11/27 16:33:24 by laraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main(void)
{
	char a[] = "fc";
	char b[] = "dj";
	printf("%d\n", ft_strncmp(a, b, 3));
	printf("%d\n", ft_strncmp(a, b, 7));
	printf("%d\n", ft_strncmp(a, b, 0));
	
	return 0;
}
*/