#include "./includes/push_swap.h"

void	swap_a(t_stack	*a)
{
	int	tmp;

	if (a == NULL || a->next == NULL)
		return ;
	tmp = a->value;
	a->value = a->next->value; //достаем значение стека a
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

//top goes to bottom of Stack A

void 	ra(t_stack **a)
{
	t_stack *last;
	t_stack *start_next;
	

	if ((*a) == NULL || (*a)->next == NULL)
		return ;
	last = *a;
	start_next = (*a)->next;
	while (last->next != NULL)
		last = last->next;
	(*a)->next = NULL;
	last->next = *a;
	*a = start_next;
	write(1, "ra\n", 3);
	// print_stack(*a, "after");
}

//bottom goes to the top of Stack A
void	rra(t_stack **a)
{
	t_stack *first;
	t_stack *moved;
	t_stack *rotated;

	if ((*a) == NULL || (*a)->next == NULL)
		return ;
	first = *a;
	moved = *a;
	while (moved->next->next != NULL)
		moved = moved->next; //находим последний элемент, который ссылается на NULL
	rotated = moved->next;//записали в некст значение первого
	moved->next = NULL;
	rotated->next = first;
	*a = rotated;
	write(1, "rra\n", 4);
	// print_stack(*a, "the last one");
}

// void	rra(t_stack **a)
// {
// 	t_stack		*first_list;
// 	t_stack		*rotate_list;
// 	t_stack		*penultimate_list;

// 	if ((*a) == NULL || (*a)->next == NULL)
// 		return ;
// 	first_list = *a;
// 	penultimate_list = *a;
// 	while (penultimate_list->next->next != NULL)
// 		penultimate_list = penultimate_list->next;
// 	rotate_list = penultimate_list->next;
// 	penultimate_list->next = NULL;
// 	rotate_list->next = first_list;
// 	*a = rotate_list;
// 	write(1, "rra\n", 4);

// }


// //из а в б
// void	pb(t_stacks *stack)
// {
// 	t_stack *new;

// 	if (stack->b == NULL)
// 		return ;
// 	stack->size_a -= 1;
// 	stack->size_b += 1;
// 	new = stack->a;
//	stack->a = stack->a->next;
// 	new->next = stack->b
// 	stack->b = new;
// 	write(1, "pb\n", 3);
// 	print_stack(stack->b, "stack b");
// }


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


// void	rra(t_stack **a)
// {
// 	t_stack		*first;
// 	t_stack		*moved;
// 	t_stack		*rotated;

// 	if ((*a) == NULL || (*a)->next == NULL)
// 		return ;
// 	first = *a;
// 	moved = *a;
// 	while (moved->next->next != NULL)
// 		moved = moved->next;
// 	rotated = moved->next;
// 	moved->next = NULL;
// 	rotated->next = first;
// 	*a = rotated;
// 	write(1, "rra\n", 4);
// }

// int temp;
	// int temp1;
	// int temp2;
	// int d = 0;
	// temp = a->value; //23
	// a->value = a->next->value; //3
	// temp1 = a->value;//3
	// a->value = a->next->value;//1
	// temp2 = a->value;//1
	// a->next->value = temp; // 4 1 23
	// write(1, "ra\n", 3);
	// while (d < 4)
	// {
	// 	printf("%d\n", a->value);
	// 	a->value = a->next->value;
	// 	d++;
	// }