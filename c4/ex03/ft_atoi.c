
int
	pass_white_space(char *str)
{
	int i;

	i = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == ' ')
	{
		i++;
	}
	return (i);
}

int
	count_minus(char *str, int j)
{
	int sign;
	int i = j;

	sign = i;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return (sign);
}

int
	pass_plus_minus(char *str, int j)
{
	int i;

	i = j;
	while (str[i] == '-' || str[i] == '+')
	{
		i++;
	}
	return (i);
}

int
	ft_atoi(char *str)
{
	int i;
	int sign;
	int nb;

	i = pass_white_space(str);
	sign = count_minus(str, i);
	nb = 0;
	i = pass_plus_minus(str, i);
	while (str[i] != '\0')
	{
		if (str[i] > 47 && str[i] < 58)
			nb = nb * 10 + str[i] - 48;
		if ((str[i] > 57 || str[i] < 48))
		{
			nb *= sign;
			return (nb);
		}
		i++;
	}
	return (0);
}
