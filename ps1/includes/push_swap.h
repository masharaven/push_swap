#include "../includes/libft/libft.h"

typedef	struct s_list{
	int	num[1000];
	int	count_elem;
}	t_list;

typedef struct s_stack{ // создание односвязного списка
	int value;
	struct s_stack *next;
}   t_stack;

typedef struct s_stacks{
	int min;
	int max;
	int	size_a;
	int	size_b;
	t_stack *a;
	t_stack *b;
}   t_stacks;


void    write_error();

//push_swap.c
void	ft_sort_el(t_stacks *stacks);

// validation.c
int ft_validation(int argc, char **argv);
int	spaces_tabs(char *str);
void	numbers(char *str);

//make_int_array.c
void	*ft_make_num_array(t_list *dst, char **argv, int argc);
void	ft_make_list(int *arr, t_list *new, int c);

//make_serious_shit.c (double list)
int		*ft_int_arr_cpy(int *dst, const int *src, int count);
void    ft_make_doublelist(t_list *new, t_stacks *stacks);
void	quick_sort(int *arr, int low, int high);
int		partition(int *arr, int low, int high);

//make_stacks.c
void    make_stacks(t_list *new, t_stacks *stacks);
t_stack    *ft_create(int *arr, int count);

//sorting_to_stacks.c
void    sort_3_elem(t_stacks *stacks);
void	sort_5_elem(t_stacks *stacks);
int		maximum(t_stack	*stack);

//commands.c
void	swap_a(t_stack	*a);
void	swap_b(t_stack *b);
void	ss_ab(t_stack *a, t_stack *b);
void 	ra(t_stack **a);
void	rra(t_stack **a);
void	pb(t_stacks *s);


//my
void print_stack (t_stack *begin, char *str);













// typedef struct		s_stack
// {
// 	int				data;
// 	int				step;
// 	int				rotate;
// 	struct s_stack	*next;
// }					t_stack;

// typedef struct		s_stacks
// {
// 	int				count_a;
// 	int				count_b;
// 	int				min;
// 	int				max;
// 	int				med;
// 	t_stack			*a;
// 	t_stack			*b;
// }					t_stacks;