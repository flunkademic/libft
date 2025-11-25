
#include "libft.h"
/*
char	test_function(unsigned int i, char c)
{
	(void)i;
	if (c >= 97 && c <= 122)
		return (c -= 32);
	else
		return (c += 32);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*result;

	i = 0;
	if (!s || !f)
		return (NULL);
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
	char 		*res = ft_strmapi(s, test_function);
	printf("%s\n", res);

	free(res);
	return (0);
}
*/
