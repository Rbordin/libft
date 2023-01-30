#include "libft.h"

int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

void ft_putnbr_fd(int n, int fd)
{
	int	i;

	i = ft_count(n);
	if (fd != -1)
		write(fd, n, i);
}
