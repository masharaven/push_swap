#include "./iclds/push_swap.h"

int main(int argc, char **argv)
{
	t_struct    *new;
	t_stacks    *stacks;
	int			i;

	i = 1;
	if (argc < 2)
		write_error();
	if (!(new = (t_struct*)malloc(sizeof(t_struct))))
		return (0);
	if (!(stacks = (t_stacks *)malloc(sizeof(t_stacks))))
		return (0);
	if (ft_valid_str(argv, argc))
	{
		
	}

	return (0);
}