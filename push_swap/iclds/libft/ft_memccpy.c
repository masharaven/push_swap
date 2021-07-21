#include "libft.h"

void	*ft_memccpy (void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	if (!src && !dest)
		return (0);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		if (((unsigned char *)src)[i] ==  (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (0);
}
/*
void
	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (src == NULL || dest == NULL)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		if (((unsigned char *)src)[i] ==  (unsigned char)c)
			return (dest + i + 1); // почему мы не можем объявить тип
		i++;
	}
	return (0);
}*/