#include "./includes/push_swap.h"
void	ft_zero(t_list *new, t_stacks *stacks)
{
	new->count_elem = 0;
	
	stacks->a = NULL;
	stacks->b = NULL;

}

int main(int argc, char **argv)
{
	int i;
	t_list		*new;
	t_stacks	*stacks;

	i = 1;
	if (argc < 2)
		exit(1);
	if (!(new = (t_list *)malloc(sizeof(t_list))))
		exit(1);
	if (!(stacks = (t_stacks *)malloc(sizeof(t_stacks))))
		exit(1);
	ft_zero(new, stacks);
	// if (ft_validation(argc, argv))	проверка на нормальность и адекватность строки
	// {
	// }
	ft_make_num_array(new, argv, argc);
	ft_make_doublelist(new, stacks);
		
}
