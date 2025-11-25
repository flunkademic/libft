
#include "libft.h"
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int main(void)
{
	unsigned char test1[20];
	unsigned char test2[20];

	// Garbage first FOR differences show
	memset(test1, 0xAA, 20);
	memset(test2, 0xAA, 20);

	printf("My initial array:    ");
	for (int i = 0; i < 20; i++)
		printf("%d ", test1[i]);
	printf("\n");

	ft_bzero(test1, 20);
	bzero(test2, 20);

	printf("My ft_bzero:    ");
	for (int i = 0; i < 20; i++)
		printf("%d ", test1[i]);
	printf("\n");

	printf("Standard bzero: ");
	for (int i = 0; i < 20; i++)
		printf("%d ", test2[i]);
	printf("\n");
	return 0;
}
*/
