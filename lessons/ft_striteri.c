/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraus <laraus@student.lisboa42.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:15:03 by laraus            #+#    #+#             */
/*   Updated: 2025/11/27 15:39:23 by laraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static void	test_f(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = ft_toupper(*c);
	else
		*c = ft_tolower(*c);
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int	main(void)
{
	char str[] = "hello world";
		
	ft_striteri(str, test_f);
	printf("%s\n", str);
	return (0);
}
*/