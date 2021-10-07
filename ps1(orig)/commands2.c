#include "./includes/push_swap.h"
//bottom goes to the top of Stack A
void	rra(t_stack **a)
{
	t_stack	*first;
	t_stack	*moved;
	t_stack	*rotated;

	if ((*a) == NULL || (*a)->next == NULL)
		return ;
	first = *a;
	moved = *a;
	while (moved->next->next != NULL)
		moved = moved->next;
	rotated = moved->next;
	moved->next = NULL;
	rotated->next = first;
	*a = rotated;
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	t_stack	*first;
	t_stack	*moved;
	t_stack	*rotated;

	if ((*b) == NULL || (*b)->next == NULL)
		return ;
	first = *b;
	moved = *b;
	while (moved->next->next != NULL)
		moved = moved->next;
	rotated = moved->next;
	moved->next = first;
	rotated->next = first;
	*b = rotated;
	write(1, "rrb\n", 4);
}

//send top of A to top B
void	pb(t_stacks *s)
{
	t_stack	*buff;

	if (s->a == NULL)
		return ;
	s->size_a -= 1;
	s->size_b += 1;
	buff = s->a;
	s->a = s->a->next;
	buff->next = s->b;
	s->b = buff;
	write(1, "pb\n", 3);
}

//1st elem of the stack B goes to the top of A. don't do anything if B is empty
void	pa(t_stacks *s)
{
	t_stack	*buff;

	if (s->b == NULL)
		return ;
	s->size_a += 1;
	s->size_b -= 1;
	buff = s->b;
	s->b = s->b->next;
	buff->next = s->a;
	s->a = buff;
	write(1, "pa\n", 3);
}
