#include "libft.h"

static int	ft_in_set(char s1, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i;
	size_t	s;
	size_t	e;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	s = 0;
	e = ft_strlen(s1);
	while (s1[s] && ft_in_set(s1[s], set))
		s++;
	while (e > s && ft_in_set(s1[e - 1], set))
		e--;
	res = (char *)malloc(sizeof(*s1) * (e - s + 1));
	if (!res)
		return (NULL);
	while (s < e)
		res[i++] = s1[s++];
	res[i] = 0;
	return (res);
}
