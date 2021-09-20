#include"./includes/push_swap.h"
// #include <stdio.h>

void    sort_3_elem(t_stacks *stacks)
{
	int max;

	max = maximum(stacks->a);
	if (stacks->size_a == 1)
		return ;
	if (stacks->size_a == 2)
	{
		if (stacks->a->value > stacks->a->next->value)
			swap_a(stacks->a);
		else 
			return;
	}
	if (stacks->size_a == 3)
	{
		if (stacks->a->value == max)
		{	
			// print_stack(stacks->a, "before ra");
			ra(&stacks->a);
		}
		if (stacks->a->next->value == max)
		{
			rra(&stacks->a);
			// print_stack(stacks->a, "after rra");
		}
		if (stacks->a->value > stacks->a->next->value)
			swap_a(stacks->a);
		// print_stack(stacks->a, "after sa");
	}
}

void	sort_5_elem(t_stacks *stacks)
{
	while (stacks->size_b < 2)
	{
		// print_stack(stacks->b, "before");
		if (stacks->a->value == stacks->max || stacks->a->value == stacks->min)
			pb(stacks);
		else 
			ra(&stacks->a);
		// print_stack(stacks->a, "after");
	}
	// print_stack(stacks->a, "a");
	// print_stack(stacks->b, "b");
	sort_3_elem(stacks);
	pa(stacks);
	pa(stacks);
	// print_stack(stacks->a, "a; after");
	if (stacks->a->value == stacks->max)
	{
		// print_stack(stacks->a, "before pa");
		ra(&stacks->a);
		// print_stack(stacks->a, "after pa");
	}
	else
	{
		swap_a(stacks->a);
		ra(&stacks->a);
	}
	// print_stack(stacks->a, "after pa");
}

int maximum(t_stack	*stack)
{
	int max;

	max = 0;
	while(stack)
	{
		if(stack->value > max)
			max = stack->value;
		stack = stack->next;
	}
	return (max); 
}