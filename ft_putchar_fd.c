#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	ft_putchar_fd('a', 2);
	ft_putchar_fd('a', 0);
	ft_putchar_fd('a', 1);
	return (0);
}
*/
