#include "./includes/push_swap.h"

void	swap_a(t_stack	*a)
{
	int	tmp;

	if (a == NULL || a->next == NULL)
		return ;
	tmp = a->value;
	a->value = a->next->value;
	a->next->value = tmp;
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

void	ss_ab(t_stack *a, t_stack *b)
{
	int	tmp;

	tmp = a->value;
	a->value = a->next->value;
	a->next->value = tmp;
	tmp = b->value;
	b->value = b->next->value;
	b->next->value = tmp;
	write(1, "ss\n", 3);
}

//top goes to bottom of Stack A

void	ra(t_stack **a)
{
	t_stack	*last;
	t_stack	*start_next;
	t_stack	*new;

	if ((*a) == NULL || (*a)->next == NULL)
		return ;
	new = *a;
	last = *a;
	start_next = (*a)->next;
	while (last->next != NULL)
		last = last->next;
	new->next = NULL;
	last->next = new;
	*a = start_next;
	write(1, "ra\n", 3);
}

//top numb goes to bottom of stack B
void	rb(t_stack **b)
{
	t_stack	*last;
	t_stack	*new;
	t_stack	*save;

	if ((*b) == NULL || (*b)->next == NULL)
		return ;
	last = (*b);
	save = *b;
	new = (*b)->next;
	while (last->next != NULL)
		last = last->next;
	save->next = NULL;
	last->next = save;
	*b = new;
	write(1, "rb\n", 3);
}
