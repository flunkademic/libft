/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraus <laraus@student.lisboa42.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 11:43:23 by laraus            #+#    #+#             */
/*   Updated: 2025/11/06 18:39:58 by laraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	size_t	totalb_len;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	totalb_len = s1_len + s2_len;
	new_string = (char *)malloc(sizeof(char) * (totalb_len + 1));
	if (!new_string)
		return (NULL);
	ft_strlcpy(new_string, s1, s1_len + 1);
	ft_strlcat(&new_string[s1_len], s2, s2_len + 1);
	return (new_string);
}
