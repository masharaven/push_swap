#include "./includes/push_swap.h"
//moving all numbers to stack B except 
void    pasting_sort(t_stacks *s)
{
	int d = 0;
	while(s->size_a > 2)
	{
		d++;
		if (s->a->value == s->max || s->a->value == s->min)
			ra(&s->a);
		else
		{
			pb(s);
			if (s->b->value == s->mid)
				rb(&s->b);
		}
	// 	printf("|%d|\n", d);
	// 	print_stack(s->a, "stack a");
	// print_stack(s->b,  "stack b ");
	}  
	// print_stack(s->a, "stack a");
	// print_stack(s->b,  "stack b");
	// printf("%d", s->mid);
	if (s->a > s->a->next)
		swap_a(s->a);
	pa(s);
	start_sorting(s);
}

void	start_sorting(t_stacks *stacks)
{
	t_steps *steps;

	steps = (t_steps *)malloc(sizeof(t_steps));
	if (!steps)
		exit(1);
	while (stacks->size_b != 0)
	{
		steps->dest_a = 0;
		steps->dest_b = 0;
		steps->size_a = -1;
		steps->size_b = -1;

		count_steps(stacks->a, stacks->size_a);
		count_steps(stacks->b, stacks->size_b);
		steps_min_top(stacks, steps);
		do_the_commands(stacks, steps);
	}	
	if ((count_min_place(stacks->a, stacks->min)) > stacks->size_a / 2)
	{
		while (stacks->a->value != stacks->min)
			rra(&stacks->a);
	}
	else
		while (stacks->a->value != stacks->min)
			ra(&stacks->a);
	free(steps);
}

void	count_steps(t_stack *s, int size)
{
	int i;
	int		jot;
	t_stack	*place;

	i = -1;
	jot = size / 2;
	place = s;
	while (++i <= jot)
	{
		place->step = i;
		place->rotate = 1; // вверху стека
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
//find the small-step element
void	steps_min_top(t_stacks *stacks, t_steps *steps)
{
	int	min_steps;
	t_stack *a;
	t_stack *b;

	min_steps = -1;
	a = stacks->a;
	b = stacks->b;
	while (stacks->b)
	{
		min_steps = finding_place(stacks, stacks->b, steps, min_steps);
		stacks->a = a;
		stacks->b = stacks->b->next;
	}
	stacks->b = b;
}
// Функция после нахождения места вставки
// **		записывает данные в структуру steps, которая после выполнится
// **		в функции ft_instruction_execution тем самым вставит элемент
// ** 		в нужное место с наименьшим количеством действий.
int	finding_place(t_stacks *stacks, t_stack *b, t_steps *step, int min_steps)
{
	int steps;
	int	act;
	int buf;

	act = 0;
	buf = 0;	
	best_place(stacks, stacks->b, &act, &buf);
	if (stacks->a->rotate == -1)
		act = stacks->size_a - act;
	if (min_steps == -1 || (act + b->step ) < min_steps)
	{
		step->dest_a = stacks->a->rotate;
		step->dest_b = b->rotate;
		step->size_a = act;
		step->size_b = b->step;
		steps = act + b->step;
	}
	else
		steps = min_steps;
	return(steps);
}

void	best_place(t_stacks *stacks, t_stack *b, int *act, int *buf)
{
	while (stacks->a)
	{
		*buf = stacks->a->value;
		if (b->value > stacks->a->value)
		{
			*act = *(act + 1);
			if (b->value < stacks->a->next->value)
				break ;
			stacks->a = stacks->a->next;
		}
		else
			break ;
	}
	if (compare_best_steps(stacks->a, *buf, b->value ) == 1)
	{
		while(stacks->a)
		{
			if(stacks->a->value > *buf && stacks->a->value < b->step)
				break ;
			*act = *act + 1; 
		}
	}
}

int	compare_best_steps(t_stack *a, int buf, int point)
{
	t_stack *save;
	int		result;

	result = 0;
	save = a;
	while (save && result == 0)
	{
		if (save->value < buf && save->value > point)
			result = 1;
		save = save->next;
	}
	return(result);
}