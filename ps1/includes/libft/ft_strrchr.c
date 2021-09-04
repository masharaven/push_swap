#include "libft.h"

char	*ft_strrchr (const char *str, int ch)
{
	char	*last;

	last = (char *)str;
	while (*last)
		last++;
	if (ch == '\0')
		return ((char *)last);
	while (last >= str)
	{
		if (*last == (char )ch)
			return ((char *)last);
		last--;
	}
	return (NULL);
}
