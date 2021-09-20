#include "./includes/push_swap.h"

void	ft_sort_el(t_stacks *stacks)
{
	if (stacks->size_a <= 3)
		sort_3_elem(stacks);
	else if (stacks->size_a <= 5) //может быть и четверка
		sort_5_elem(stacks);
	else
		pasting_sort(stacks);
}

void	ft_zero(t_list *new, t_stacks *stacks)
{
	new->count_elem = 0;
	
	stacks->a = NULL;
	stacks->b = NULL;
	stacks->max = 0;
	stacks->min = 0;
	stacks->mid = 0;
	stacks->size_a = 0;
	stacks->size_b = 0;
}

int main(int argc, char **argv)
{
	int i;
	t_list		*new;
	t_stacks	*stacks;

	i = 1;
	if (argc < 2)
		exit(1);
	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		exit(1);
	stacks = (t_stacks *)malloc(sizeof(t_stacks));
	if (!stacks)
		exit(1);
	ft_zero(new, stacks);
	if (validation(argc, argv) != 0)
	{
		ft_make_num_array(new, argv, argc);
		ft_make_doublelist(new, stacks);
		make_stacks(new, stacks);
		ft_sort_el(stacks);
	}
	


}