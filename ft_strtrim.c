
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim_res;
	int		start;
	int		end;
	int		len;

	start = 0;
	end = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]))
		end--;
	if (end > start)
		len = end - start;
	else 
		len = 0;
	trim_res = malloc(sizeof(char) * (len + 1));
	if (!trim_res)
		return (NULL);
	ft_strlcpy(trim_res, s1 + start, len + 1);
	return (trim_res);
}
/*
int main(void)
{
	char const test1[] = " find Something to cut find find find";
	char const set[] = " find";
	char *my_result = ft_strtrim(test1, set);

	if (!my_result)
		return 1;

	printf("Trimmed string: '%s'\n", my_result);

	for (size_t i = 0; i < strlen(my_result); i++)
		printf("%c", my_result[i]);
	printf("\n");

	free(my_result);
	my_result = NULL;

	char *trimmed = ft_strtrim("aaaaaa", "a");
	if (trimmed)
	{
		printf("Result: '%s'\n", trimmed);
		free(trimmed);
	}
	
	return 0;
}
*/
