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
		printf("|%d|\n", d);
		print_stack(s->a, "stack a");
	print_stack(s->b,  "stack b ");
	}  
	print_stack(s->a, "stack a");
	print_stack(s->b,  "stack b");
	printf("%d", s->mid);
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
	steps->dest_a = 0;
	steps->dest_b = 0;
	steps->size_a = -1;
	steps->size_b = -1;

	count_steps(stacks->a, stacks->size_a);
	count_steps(stacks->b, stacks->size_b);
	steps_min_top(stacks, steps);


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
		min_steps = finding_place(stacks, stack->b, int min_steps);
	}
}
// Функция после нахождения места вставки
// **		записывает данные в структуру steps, которая после выполнится
// **		в функции ft_instruction_execution тем самым вставит элемент
// ** 		в нужное место с наименьшим количеством действий.
void	finding_place(t_stacks *stacks, t_stack *b, int min_steps)
{
	int steps; 
	best_place(stacks, stack->b);

}

void	best_place(t_stacks *stacks, t_stack *b)
{
	int	act;
	int buf;

	while (stack->a)
	{
		
	}
}