#include "./includes/push_swap.h"

void	numbers(char *str)
{
	int	i;

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
	int	i;

	i = 0;
	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
			i++;
		if ((str[i] != ' ' || str[i] != '\t') && str[i] != '\0')
			return (1);
	}
	return (0);
}

int	ft_validation(int argc, char **argv)
{
	int	i;
	int	value;

	i = 1;
	value = 0;
	while (i < argc)
	{
		if (spaces_tabs(argv[i]))
			value = 1;
		i++;
	}
	return (value);
}
