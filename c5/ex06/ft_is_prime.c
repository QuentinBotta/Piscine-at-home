
int
	ft_is_prime(int nb)
{
	int i;

	if (nb < 2)
		return (0);
	i = nb / 2;
	while (i > 1)
	{
		if (nb % i == 0)
			return (0);
		i--;
	}
	return (1);
}
