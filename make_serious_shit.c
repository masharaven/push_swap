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
	return (dst);
}

void	quick_sort(int *arr, int low, int high) //туууууттттт!!!!
{
	int	i;
	int	j;
	int	pivot;
	int	temp;

	temp = 0;
	i = low - 1;
	j = 0;
	pivot = arr[high];
	while (j < pivot) //  8 32  12   5  42/  46 45
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
	arr[i] = arr[high]; 
	int d = 0;
	while (d < 3)
	{
		printf("%d", arr[d]);
		d++;
	}
	return(i);
}

void	ft_make_doublelist(t_list *new, t_stacks *stacks)
{
	int	*dublicate;

	if (!(dublicate = (int *)malloc(sizeof(int) * new->count_elem)))
		exit (1);
	dublicate = ft_int_arr_cpy(dublicate, new->num, new->count_elem);
	
	quick_sort(dublicate, 0, new->count_elem - 1);
} 