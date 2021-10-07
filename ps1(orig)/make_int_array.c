#include "./includes/push_swap.h"

void	ft_make_list(int *arr, t_list *new, int c)
{
	int	i;

	i = -1;
	while (c > ++i)
	{
		new->num[new->count_elem + i] = arr[i];
	}
	new->count_elem += c;
	free(arr);
}

int	ft_count_elem(const char *argv)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (argv[i])
	{
		if (argv[i] != ' ' && argv[i] != '\t')
		{
			count++;
			while ((argv[i] != ' ' && argv[i] != '\t') && argv[i] != 0)
				i++;
		}
		else
			i++;
	}
	return (count);
}

void	ft_make_num_array(t_list *dst, char **argv, int argc)
{
	int		i;
	int		num_of_elem;
	int		j;
	char	**buff;
	int		*arr;

	i = 1;
	while (i < argc)
	{
		j = -1;
		num_of_elem = ft_count_elem(argv[i]);
		buff = ft_split(argv[i], num_of_elem);
		arr = (int *)malloc(sizeof(int) * (num_of_elem));
		if (!arr)
			exit(1);
		while (num_of_elem > ++j)
		{
			arr[j] = ft_atoi(buff[j]);
			free(buff[j]);
		}
		free(buff);
		ft_make_list(arr, dst, num_of_elem);
		i++;
	}
}
