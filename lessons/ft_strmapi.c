/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraus <laraus@student.lisboa42.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:46:34 by laraus            #+#    #+#             */
/*   Updated: 2025/11/27 16:06:31 by laraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
static char	test_f(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (ft_toupper(c));
	else
		return (ft_tolower(c));
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*result;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
int	main(void)
{
	char const	s[] = "Something";
	char 		*res = ft_strmapi(s, test_f);
	printf("%s\n", res);

	free(res);
	return (0);
}
*/