#include "./includes/push_swap.h"

#include <stdio.h>
void    make_stacks(t_list *new, t_stacks *stacks)
{
	stacks->a = ft_create(new->num, new->count_elem);
	stacks->b = NULL;
	stacks->size_a = new->count_elem;

	// int i = 0;
	// while (i < new->count_elem)
	// {
	// 	printf("%d\n", stacks->a->value);
	// 	stacks->a = stacks->a->next;
	// 	i++;
	// }
}

t_stack    *ft_create(int *arr, int count)
{
	int i;
	t_stack *buff;
	t_stack *head;

	i = 0;
	buff = (t_stack *)malloc(sizeof (t_stack) * count);
	if (!buff)
		exit(1);
	head = buff;
	while (i < count)
	{
		if (i < count - 1)
		{
			buff->next = malloc(sizeof(t_stack) * (count - 1));
			if (!buff)
				exit(1);
		}
		buff->value = arr[i];
		if(i == (count - 1))
			buff->next = NULL;
		else
			buff = buff->next;
		i++;
 	}
	return(head);
}