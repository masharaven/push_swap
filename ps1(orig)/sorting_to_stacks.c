#include"./includes/push_swap.h"
// #include <stdio.h>

void	sort_3_elem(t_stacks *stacks)
{
	int	max;

	max = maximum(stacks->a);
	if (stacks->size_a == 1)
		return ;
	if (stacks->size_a == 2)
	{
		if (stacks->a->value > stacks->a->next->value)
			swap_a(stacks->a);
		else
			return ;
	}
	if (stacks->size_a == 3)
	{
		if (stacks->a->value == max)
			ra(&stacks->a);
		if (stacks->a->next->value == max)
			rra(&stacks->a);
		if (stacks->a->value > stacks->a->next->value)
			swap_a(stacks->a);
	}
}

void	sort_5_elem(t_stacks *stacks)
{
	while (stacks->size_b < 2)
	{
		if (stacks->a->value == stacks->max || stacks->a->value == stacks->min)
			pb(stacks);
		else
			ra(&stacks->a);
	}
	sort_3_elem(stacks);
	pa(stacks);
	pa(stacks);
	if (stacks->a->value == stacks->max)
		ra(&stacks->a);
	else
	{
		swap_a(stacks->a);
		ra(&stacks->a);
	}
}

int	maximum(t_stack	*stack)
{
	int	max;

	max = 0;
	while (stack)
	{
		if (stack->value > max)
			max = stack->value;
		stack = stack->next;
	}
	return (max);
}
