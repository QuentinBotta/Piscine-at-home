
int
	ft_iterative_factorial(int nb)
{
	int i;
	int j;

	i = nb;
	j = nb;
	if (nb < 0)
		return (0);
	while (i > 2)
	{
		j = j * (i - 1);
		i--;
	}
	return (j);
}
