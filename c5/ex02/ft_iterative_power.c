
int
	ft_iterative_power(int nb, int power)
{
	int i;
	int j;

	i = 0;
	j = 1;
	if (power < 0)
		return (0);
	while (i < power)
	{
		j *= nb;
		i++;
	}
	return (j);
}
