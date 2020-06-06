
int
	ft_recursive_power(int nb, int power)
{
	int i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		i = nb * ft_recursive_power(i, power -1);
	return (i);
}
