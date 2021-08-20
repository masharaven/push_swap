#include "./includes/push_swap.h"
#include <stdio.h>

void	ft_make_list(int *arr, t_list *new, int c) //записывает массив интов в структуру
{
	int i;

	i = 0;
	while(c > i)
	{
		new->num[new->count_elem + i] = arr[i];
		printf("num%d\n", new->num[new->count_elem + i]);
		i++;
	}
	new->count_elem = c;
	// printf("count_elem:|%d|\n", new->count_elem);
	free(arr);
}

int	ft_count_elem(const char *argv)
{
	int i;
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


void	*ft_make_num_array(t_list *dst, char **argv, int argc)
{
	int	i;
	int num_of_elem;
	int	j;
	char **buff;
	int *arr;
	int b;

	b = 0;
	i = 1;
	j = 0;
	while (i < argc)
	{
		printf("%d\n", i);
		num_of_elem = ft_count_elem(argv[i]);
		b = num_of_elem;
		while (num_of_elem)
		{
			buff = ft_split(argv[i], ' ');
			if (!(arr = (int *)malloc(sizeof(int) * (num_of_elem))))
				exit(1);
			while (buff[j] && j != num_of_elem) //переписываем в массив интов
			{
				arr[j] = ft_atoi(buff[j]);
				free(buff[j]);
				j++;
				num_of_elem--;
			}
			free(buff);
			ft_make_list(arr, dst, b);
			j = 0;
		}
		i++;
	}

	return (0);
}



