#include "./includes/push_swap.h"

void	count_steps(t_stack *s, int size)
{
	int		i;
	int		jot;
	t_stack	*place;

	i = -1;
	jot = size / 2;
	place = s;
	while (++i <= jot)
	{
		place->step = i;
		place->rotate = 1;
		place = place->next;
	}
	if (size % 2 == 0)
		--i;
	while (--i >= jot)
	{
		place->step = i;
		place->rotate = -1;
		place = place->next;
	}
}

int	compare_best_steps(t_stack *a, int buf, int point)
{
	t_stack	*save;
	int		result;

	result = 0;
	save = a;
	while (save && result == 0)
	{
		if (save->value < buf && save->value > point)
			result = 1;
		save = save->next;
	}
	return (result);
}
