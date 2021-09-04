#include "./includes/push_swap.h"

void print_stack (t_stack *begin, char *str)
{
	if (str)
		printf("%s\n", str);
	while (begin)
	{
		printf("%d\n", begin->value);
		begin = begin->next;
	}
	printf("\n");
}