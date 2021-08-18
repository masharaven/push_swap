#include "libft.h"
static void	ft_numbers(long n, int fd)
{
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + 48, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	k;

	k = n;
	if (k < 0)
	{
		ft_putchar_fd('-', fd);
		k *= -1;
	}
	ft_numbers(k, fd);
}
