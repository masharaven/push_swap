#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	if (s == NULL)
		return ;
	ft_putstr_fd((char *)s, fd);
	ft_putchar_fd('\n', fd);
}
