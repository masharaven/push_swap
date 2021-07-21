#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "./libft/libft.h"

typedef struct s_struct
{
	int		nums[10000];
	int		count_el;
}			t_struct;

typedef struct s_stack
{
	int		back;
	int		next;
	int		the_num;
}			t_stack;

typedef struct s_stacks
{
	int		count_a;
	int		countn_b;
	t_stack	*a;
	t_stack	*b;

}			t_stacks;


//the begining push_swap.c
void    write_error();
int     ft_valid_str(char *argv, int argc);

//validation.c
int		ft_spaces_exist(char *argv, int argc);
int		ft_checksign(char *argv);









#endif