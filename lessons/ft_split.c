/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraus <laraus@student.lisboa42.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:20:17 by laraus            #+#    #+#             */
/*   Updated: 2025/11/27 18:50:05 by laraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	count_words;

	count_words = 0;
	if (!c)
		return (1);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			count_words++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count_words);
}

static	void	ft_make_word(const char *s, char c, int size, char **words)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (k < size)
	{
		j = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i + j] && s[i + j] != c)
			j++;
		words[k] = ft_substr(s, i, (size_t)j);
		if (!words[k++])
			return ;
		i += j;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**result_split;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	result_split = ft_calloc((word_count + 1), sizeof(char *));
	if (!result_split)
		return (NULL);
	ft_make_word(s, c, word_count, result_split);
	return (result_split);
}
/*
int	main(void)
{
	char	str[] = " afa sfaf asfasf    asfasfa";
	char	c = '\0';
	char	**split = NULL;
	split = ft_split(str, c);
	if (split)
	{	
		for (int i = 0; split[i]; i++)
		{
			printf("%s\n", split[i]);
			free(split[i]);
		}
		free(split);
	}
	split = NULL;

	return (0);
}
*/