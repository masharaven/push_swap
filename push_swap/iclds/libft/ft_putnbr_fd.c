#include "libft.h"
void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	sign;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		//sign = 
	}

	ft_putstr_fd(ft_itoa(n), fd);
}
