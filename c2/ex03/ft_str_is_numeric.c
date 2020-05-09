int
	ft_str_is_numeric(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if ((str[i] > 64 && stri[i] < 91))
			return (0);
		if ((str[i] > 96 && str[i] < 123))
			return (0);
	}
	return (1);
}
