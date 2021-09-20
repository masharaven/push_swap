#include "./includes/push_swap.h"

int	validation(int argc, char **argv)
{
	int i;
	int count;

	i = 1;
	count = 0;
	while (i < argc)
	{
		if (space_exist(argv[i]))
		{
			if_number(argv[i]);
			str_valid(argv[i]);
			count = 1;
		}
		// printf("%d", space_exist(argv[i]));
		i++;
	}
	return (count);
}

void	str_valid(char *str)
{
	int	i;
	int sign;
	int num;

	sign = 0;
	i = 0;
	num = 0; 
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			num++;
		else if (str[i] == ' ' || str[i] == '\t')
		{
			if (sign != 0 && num == 0)
				write_error();
			sign = 0;
			num = 0;
		}
		else if ((str[i] == '-' || str[i] == '+') && (sign == 0) && str[i + 1] != '\0')
			sign++;
		else
			write_error();
		i++;
	}
}

void	if_number(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != 0)
	{
		if (argv[i] >= '0' && argv[i] <= '9')
			return ;
		i++;
	}
	write_error();
}

//checking the tabs and spaces existance
int	space_exist(char *s)
{
	int i;

	i = 0;
	while(s[i] != '\0')
	{
		if (s[i] == '\n' || s[i] == '\t' || s[i] == '\v'
			|| s[i] == ' ' || s[i] == '\r' || s[i] == '\f')
			i++;
		else
			return (1);
	}
	return (0);
}