#include "./includes/push_swap.h"

void	do_the_commands(t_stacks *stacks, t_steps *steps)
{
	while (steps->size_a > 0)
	{
		if (steps->dest_a == 1)
			ra(&stacks->a);
		else
			rra(&stacks->a);
		steps->size_a--;
	}
	while (steps->size_b > 0)
	{
		if (steps->dest_b == 1)
			rb(&stacks->b);
		else
			rrb(&stacks->b);
		steps->size_b--;
	}
	pa(stacks);
}

int	count_min_place(t_stack *a_stack, int small)
{
	int	i;

	i = 0;
	while (a_stack)
	{
		if (a_stack->value == small)
			break ;
		a_stack = a_stack->next;
		i++;
	}
	return (i);
}
