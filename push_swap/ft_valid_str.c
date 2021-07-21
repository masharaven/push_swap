#include "./iclds/push_swap.h"

int     ft_valid_str(char *argv, int argc)	//поверка строки, которую ввел пользователь на нормальность
{
	int		i;
	int		val;
	

	i = 0;
	val = 0;

	if (!argv)
		return (0);
	while (i < argc)
	{
		while (argv[i] == ' ' || argv[i] == '\n' || argv[i] == '\a' || argv[i] == '\b' ||	//если в строкее одни пробелы
		argv[i] == '\t' || argv[i] == '\v' || argv[i] == '\f' || argv[i] == '\r')
			i++;
		if (argv[i])
		{
			val = ft_checksign(argv);
			val = ft_spaces_exist(argv, argc);
		}
		return (val);
	}
}

int		ft_checksign(char *argv)	//проверка на то,что в строку подадут "- ...-" || "+ ... +"
{
	int	i;

	i = 0;
	
	if (argv[i] == '-' || argv[i] == '+')
	{
		while (argv[i] == '-' || argv[i] == '+')
		i++;
	}
	else
		return (1);
	return (0);
}

int		ft_spaces_exist(char *argv, int argc)	//проверка на нормальность \t -9 -\t
{
	int		num;
	int		sign;
	int		i;

	while (i < argc)
	{
		num = 0;
		if (argv[i] >= 0 && argv[i] <= 9)
			num++;
		else if (argv[i] == ' ' || argv[i] == '\t')				//ЕСЛИ В КОНЦЕ СТОИТ ЧИСТО МИНУС ОН ЕГО ПРОПУСТИТ!!! [\t -9 -\0]
		{
			if (sign != 0 && num == 0) // \t -  \t
				return (0);
			while (argv[i] == ' ' || argv[i] == '\t')
				i++;
		}
		if ((argv[i] == '+' || argv[i] == '-') && argv[i + 1] && sign == 0)
			sign = 1;
		else
			sign = 0;
		i++;
	}
	return (1);
}
