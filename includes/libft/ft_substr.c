#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char			*res;
	size_t			i;
	size_t			h;

	i = 0;
	h = 0;
	if (!str)
		return (NULL);
	if (start > ft_strlen(str))
		len = 0;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (i != start)
		i++;
	while (h < len && str[i])
	{
		res[h] = str[i];
		h++;
		i++;
	}
	res[h] = '\0';
	return (res);
}
