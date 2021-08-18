#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char			*mesto;
	unsigned int	i;
	unsigned int	h;	
	size_t			s1len;
	size_t			s2len;	

	i = 0;
	h = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	mesto = (char *)malloc(sizeof(*mesto) * (s1len + s2len + 1));
	if (mesto == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		mesto[i++] = *s1++;
	}
	while (*s2 != '\0')
	{
		mesto[i++] = *s2++;
	}
	mesto[i] = '\0';
	return (mesto);
}
