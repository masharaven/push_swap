#include "./includes/push_swap.h"

void    swap_a(t_stack	*a)
{
	int	tmp;

	tmp = a->value;
	a->value = a->next->value; //достаем значение стека a
	tmp = a->next->value;
	write(1, "sa\n", 3);
}

void	swap_b(t_stack *b)
{
	int	tmp;

	tmp = b->value;
	b->value = b->next->value;
	b->next->value = tmp;
	write(1, "sb\n", 3);
}

void ss_ab(t_stack *a, t_stack *b)
{
	int tmp;

	tmp = a->value;
	a->value = a->next->value;
	a->next->value = tmp;
	tmp = b->value;
	b->value = b->next->value;
	b->next->value = tmp;
	write(1, "ss\n", 3);
}

int main(int argc, char **argv)
{
	(void)argc;
	swap_a(argv);
}
// int main(int argc, char **argv)
// {
// 	int i;
// 	int res;

// 	res = 0;
// 	i = 1;
// 	while (argc > 2)
// 	{
// 		while (argv[i])
// 		{
// 			res = ft_atoi(argv[i]);
			
// 		}
	
// 		{
// 			swap_a(argv[i]);
// 		}
// 	}
// }