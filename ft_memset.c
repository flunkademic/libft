#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	uc;

	p = (unsigned char *)s;
	uc = (unsigned char)c;
	while (n--)
		*p++ = uc;
	return (s);
}
/*
int	main(void)
{
	char a[] = "Hello";
	char b[] = "Hello";

	memset(a, 'Z', 5);
	ft_memset(b, 'Z', 5);

	printf("n=5: %s | %s\n", a, b);
	return 0;
}
*/
