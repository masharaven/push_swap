#include "libft.h"

// static size_t	ft_count_words(char const *s, char c)
// {
// 	size_t	i;
// 	size_t	h;

// 	i = 0;
// 	h = 0;
// 	while (s[i])
// 	{
// 		while (s[i] == c)
// 			i++;
// 		if (s[i])
// 			h++;
// 		while (s[i] != c && s[i] != '\0')
// 			i++;
// 	}
// 	return (h);
// }

// void	ft_free(char **new, size_t j)
// {
// 	while (j >= 0)
// 	{
// 		free(new[j]);
// 		j--;
// 	}
// 	free(new);
// }

// static char	ft_samafunc(char const	*s, char c, char **new, size_t words)
// {
// 	size_t	start;
// 	size_t	end;
// 	size_t	j;

// 	j = 0;
// 	start = 0;
// 	while (j < words)
// 	{
// 		while (s[start] == c)
// 			start++;
// 		end = start;
// 		while (s[end] != c && s[end])
// 			end++;
// 		new[j] = ft_substr(s, start, (end - start));
// 		if (!new[j])
// 		{
// 			ft_free(new, j);
// 			return (1);
// 		}
// 		start = end;
// 		j++;
// 	}
// 	new[j] = NULL;
// 	return (0);
// }

// char	**ft_split(char *s, char c)
// {
// 	size_t	words;
// 	int		proverka;
// 	char	**new;

// 	if (!s)
// 		return (NULL);
// 	words = ft_count_words(s, c);
// 	new = (char **)malloc(sizeof(char *) * (words + 1));
// 	if (!new)
// 		return (NULL);
// 	proverka = ft_samafunc(s, c, new, words);
// 	if (proverka == 1)
// 		return (NULL);
// 	return (new);
// }
 int		ft_countword(char const *s)
{
	int count;

	count = 0;
	while (*s)
	{
		if (*s != ' ' && *s != '\t')
		{
			count++;
			while ((*s != ' ' && *s != '\t') && *s != '\0')
				s++;
		}
		else
			s++;
	}
	return (count);
}

int		ft_wordmalloc(char const *s, char **mass)
{
	int lenword;
	int i;

	i = 0;
	while (*s)
	{
		lenword = 0;
		if (*s != ' ' && *s != '\t')
		{
			while ((*s != ' ' && *s != '\t') && *s != '\0')
			{
				s++;
				lenword++;
			}
			if (!(mass[i++] = ((char *)malloc(sizeof(char) * (lenword + 1)))))
				return (i);
		}
		else
			s++;
	}
	return (0);
}

void	ft_rewriting(char const *s, char **mass)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*s)
	{
		if (*s != ' ' && *s != '\t')
		{
			while ((*s != ' ' && *s != '\t') && *s != '\0')
				mass[i][j++] = *s++;
			mass[i++][j] = '\0';
		}
		j = 0;
		if (*s != '\0')
			s++;
	}
}

char	**ft_split(char const *s, int word)
{
	char	**mass;
	int		res;

	if (!s)
		return (NULL);
	if (!(mass = (char **)malloc(sizeof(char *) * (word + 1))))
		exit(1);
	mass[word] = NULL;
	res = ft_wordmalloc(s, mass); //что это делает?
	if (res == 0)
		ft_rewriting(s, mass);
	else
	{
		while (res != 0)
		{
			free(mass[res]);
			mass[res--] = NULL;
		}
		free(mass);
	}
	return ((char **)mass);
}

