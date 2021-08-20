#include "./includes/push_swap.h"
int		*ft_int_arr_cpy(int *dst, const int *src, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		dst[i] = src[i];
		i++;
	}
	// int d = 0;
	// while (d < 3)
	// 	printf("dst|%d|\n", dst[d++]);
	return (dst);
}

int	partition(int *arr, int low, int high)
{
	int	i;
	int	j;
	int	pivot;
	int	temp;

	temp = 0;
	i = low - 1;
	j = 0;
	pivot = arr[high];
	while (j < high) // 8    12 5 42 32/  46 45
	{
		if (arr[j] <= pivot)
		{
			i++;
			temp = arr[i]; //меняем местами 
			arr[i] = arr[j];
			arr[j] = temp;
		}
		j++;
	}
	temp = arr[i + 1];
	arr[i + 1] = arr[high];
	arr[high] = temp;
	return (i + 1);
}

void	quick_sort(int *arr, int low, int high)
{
	int	k;
	static int flags = 1;
	// 	int d = 0;
	// while (d < 3)
	// 	printf("dublicate|%d|\n", arr[d++]);
	if (flags)
	{
		int d = 0;
		while (d < 3)
		{
			// printf("%d:%d\n",d, arr[d]);
			d++;
		}
	}
	flags = 1;
	if (low < high)
	{
		k = partition(arr, low, high);	
		quick_sort(arr, low, k - 1);
		quick_sort(arr, k + 1, high);
	}
}


void	ft_make_doublelist(t_list *new, t_stacks *stacks)
{
	int	*dublicate;
	if (!(dublicate = (int *)malloc(sizeof(int) * new->count_elem)))
		exit (1);
	dublicate = ft_int_arr_cpy(dublicate, new->num, new->count_elem);
	quick_sort(dublicate, 0, new->count_elem - 1);
	
} 