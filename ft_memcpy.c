
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	unsigned char test1[20];
	unsigned const char test2[] = "Something";
	unsigned char *my_result = ft_memcpy(test1, test2, 7);
	
	printf("%s\n", my_result);
	printf("\n\n");

	// Raw bytes, non-string, non NULL-terminating
	unsigned char rsrc[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	unsigned char rdest1[10];
	unsigned char rdest2[10];

	ft_memcpy(rdest1, rsrc, 10);
	memcpy(rdest2, rsrc, 10);

	printf("THE RAW BYTES(my function): ");
	for (int i = 0; i < 10; i++)
		printf("%d ", rdest1[i]);
	printf("\n\n");

	printf("Raw bytes from standard fc: ");
	for (int i = 0; i < 10; i++)
		printf("%d ", rdest2[i]);
	printf("\n\n");
	printf("\n\n");

	int src[4] = {1, 2, 3, 4};
	int dest[4];
	for (int i = 0; i < 4; i++)
		printf("%d ", dest[i]);
	printf("\n");
	memcpy(dest, src, 4 * sizeof(int));
	for (int i = 0; i < 4; i++)
		printf("%d ", dest[i]);
	printf("\n");

	return (0);
}
*/
