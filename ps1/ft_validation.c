#include "./includes/push_swap.h"

// "12 e r3     rg 12 34 5 21 7"
// 12 er 34 erfghg 
void	numbers(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			return ;
		i++;
	}
	write_error();
}

int	spaces_tabs(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
			i++;
		if ((str[i] != ' ' || str[i] != '\t') && str[i] != '\0')
			return 1;
	}
	return 0;
}

int ft_validation(int argc, char **argv)
{
	int i;
	int  value;

	i = 1;
	value = 0;
	while (i < argc)
	{
		
		if (spaces_tabs(argv[i]))
			value = 1; // write(1, "hello\n", 6);
		i++;
	}
	return (value);
}
// #include <stdio.h>

// int main(int argc, char **argv)
// {
// 	printf("%d\n", ft_validation(argc, argv));
// 	return 0;
// }