#include "libft.h"

static int	len(long int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

static char	*gotovyi(char *mesto, long int n, int len, int min)
{
	if (n == 0)
		return (mesto = ft_strdup("0"));
	else
	{
		mesto = (char *)malloc(sizeof(char) * (len + 1));
		if (!mesto)
			return (NULL);
	}
	min = 0;
	if (n < 0)
	{
		n *= -1;
		min++;
	}
	mesto[len] = '\0';
	while (--len > 0)
	{
		mesto[len] = (n % 10) + '0';
		n = n / 10;
	}
	if (min == 1)
		mesto[0] = '-';
	else
		mesto[0] = (n % 10) + '0';
	return (mesto);
}

char	*ft_itoa(int nb)
{
	char		*mesto;
	int			len1;
	int			min;
	long int	n;

	n = nb;
	len1 = len(n);
	min = 0;
	mesto = 0;
	mesto = gotovyi(mesto, n, len1, min);
	if (!mesto)
		return (NULL);
	return (mesto);
}
