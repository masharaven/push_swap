#include "./includes/push_swap.h"
int	*ft_int_arr_cpy(int *dst, const int *src, int count)
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

int	partition(int *arr, int low, int high)
{
	int	i;
	int	j;
	int	pivot;
	int	temp;

	temp = 0;
	i = low - 1;
	j = low;
	pivot = arr[high];
	while (j < high)
	{
		if (arr[j] <= pivot)
		{
			i++;
			temp = arr[i];
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

	if (low < high)
	{
		k = partition(arr, low, high);
		quick_sort(arr, low, k - 1);
		quick_sort(arr, k + 1, high);
	}
}

void	dublicate_check(int *new, int k)
{
	int	i;

	i = -1;
	while (++i < k)
	{
		if (new[i] == new[i + 1])
			write_error();
		i++;
	}
}

void	ft_make_doublelist(t_list *new, t_stacks *stacks)
{
	int	*dublicate;

	dublicate = (int *)malloc(sizeof(int) * new->count_elem);
	if (!dublicate)
		exit (1);
	dublicate = ft_int_arr_cpy(dublicate, new->num, new->count_elem);
	quick_sort(dublicate, 0, new->count_elem - 1);
	dublicate_check(dublicate, new->count_elem - 1);
	stacks->size_a = new->count_elem;
	stacks->size_b = 0;
	stacks->min = dublicate[0];
	stacks->max = dublicate[new->count_elem - 1];
	stacks->mid = dublicate[new->count_elem / 2];
	free(dublicate);
}
