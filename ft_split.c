
#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static void	ft_free_split(char **split, int index)
{
	int	i;

	i = 0;
	while (i < index)
		free(split[i++]);
	free(split);
}

static int	ft_skip_delimiters(char const *s, char c, int *i)
{
	while (s[*i] == c)
		(*i)++;
	return (*i);
}

static int	ft_extract_word(char const *s, char c, char **split, int *vars)
{
	int	start;
	int	wordlen;

	start = ft_skip_delimiters(s, c, &vars[0]);
	while (s[vars[0]] && s[vars[0]] != c)
		vars[0]++;
	wordlen = vars[0] - start;
	if (wordlen > 0)
	{
		split[vars[1]] = malloc(wordlen + 1);
		if (!split[vars[1]])
			return (0);
		ft_strlcpy(split[vars[1]++], s + start, wordlen + 1);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		word_count;
	int		vars[2];

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	split = malloc(sizeof(char *) * (word_count + 1));
	if (!split)
		return (NULL);
	vars[0] = 0;
	vars[1] = 0;
	while (s[vars[0]] && vars[1] < word_count)
	{
		if (!ft_extract_word(s, c, split, vars))
			return (ft_free_split(split, vars[1]), NULL);
	}
	split[vars[1]] = NULL;
	return (split);
}
/*
int	main(void)
{
	char	**result;
	int		i;

	printf("=== Testing ft_split ===\n\n");

	// Test 1: Basic split
	printf("Test 1: Basic split\n");
	result = ft_split("hello world this is test", ' ');
	i = 0;
	while (result[i])
	{
		printf("  [%d]: '%s'\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	printf("Words: %d\n\n", i);

	// Test 2: Multiple delimiters
	printf("Test 2: Multiple delimiters\n");
	result = ft_split("   hello   world  ", ' ');
	i = 0;
	while (result[i])
	{
		printf("  [%d]: '%s'\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	printf("Words: %d\n\n", i);

	// Test 3: Comma separated
	printf("Test 3: Comma separated\n");
	result = ft_split("apple,banana,cherry", ',');
	i = 0;
	while (result[i])
	{
		printf("  [%d]: '%s'\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	printf("Words: %d\n\n", i);

	// Test 4: Only delimiters
	printf("Test 4: Only delimiters\n");
	result = ft_split(",,,,", ',');
	i = 0;
	while (result[i])
	{
		printf("  [%d]: '%s'\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	printf("Words: %d\n\n", i);

	// Test 5: Empty string
	printf("Test 5: Empty string\n");
	result = ft_split("", ' ');
	i = 0;
	while (result[i])
	{
		printf("  [%d]: '%s'\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	printf("Words: %d\n\n", i);

	// Test 6: No delimiters
	printf("Test 6: No delimiters\n");
	result = ft_split("hello", ' ');
	i = 0;
	while (result[i])
	{
		printf("  [%d]: '%s'\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	printf("Words: %d\n\n", i);

	// Test 7: Mixed content
	printf("Test 7: Mixed content\n");
	result = ft_split("  a  b c   d e   ", ' ');
	i = 0;
	while (result[i])
	{
		printf("  [%d]: '%s'\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	printf("Words: %d\n\n", i);

	// Test 8: Special characters
	printf("Test 8: Special characters\n");
	result = ft_split("hello\tworld\nthis", '\t');
	i = 0;
	while (result[i])
	{
		printf("  [%d]: '%s'\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	printf("Words: %d\n\n", i);

	// Test 9: NULL input
	printf("Test 9: NULL input\n");
	result = ft_split(NULL, ' ');
	if (result == NULL)
		printf("  Correctly returned NULL for NULL input\n\n");
	else
		printf("  ERROR: Should return NULL for NULL input\n\n");

	return (0);
}
*/
