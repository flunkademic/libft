/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraus <laraus@student.lisboa42.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 18:42:26 by laraus            #+#    #+#             */
/*   Updated: 2025/11/27 18:56:01 by laraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lencount(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	len = ft_lencount(n);
	str = (char *)ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[--len] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
/*
int	main(void)
{
	int n = INT_MAX;
	printf("%s\n", ft_itoa(n));
	return (0);
}
*/