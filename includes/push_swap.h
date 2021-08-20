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
	int	size_a;
	int	size_b;
	t_stack *a;
	t_stack *b;
}   t_stacks;

void    write_error();
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