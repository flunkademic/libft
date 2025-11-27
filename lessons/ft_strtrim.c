/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraus <laraus@student.lisboa42.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:32:43 by laraus            #+#    #+#             */
/*   Updated: 2025/11/25 16:11:20 by laraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim_res;
	int		start;
	int		end;
	int		len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && s1[end - 1] && ft_strchr(set, s1[end - 1]))
		end--;
	if (end > start)
		len = end - start;
	else
		len = 0;
	trim_res = malloc(len + 1);
	if (!trim_res)
		return (NULL);
	ft_strlcpy(trim_res, s1 + start, len + 1);
	return (trim_res);
}
/*
int main(void)
{
	char const test1[] = "";
	char const set[] = " fid";
	char *my_result = ft_strtrim(test1, set);

	if (!my_result)
		return (1);
	printf("Original string: \"%s\"\n", test1);
	printf("Set string     : \"%s\"\n", set);
	printf("Trimmed string : \"%s\"\n", my_result);

	for (size_t i = 0; i < strlen(my_result); i++)
		printf("%c", my_result[i]);
	printf("\n");

	free(my_result);
	my_result = NULL;

	printf("\n\n");
	printf("Case for: string = \"aaaaaaaa\", set = \"a\"\n");
	char *trimmed = ft_strtrim("aaaaaaaa", "a");
	if (trimmed)
	{
		printf("Result: '%s'\n", trimmed);
		free(trimmed);
	}
	trimmed = NULL;
	
	return (0);
}
*/