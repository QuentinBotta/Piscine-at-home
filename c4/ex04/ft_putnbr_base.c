#include <unistd.h>

int
	compute_size(char *base);

void
	convert(long nbr, char *base, int size);

int
	check_base(char *base);

void
	ft_putnbr_base(int nbr, char *base)
{
	int size;
	long n;

	n = nbr;
	if (nbr < 0)
	{
		n = (long) nbr * -1;
		write(1, "-", 1);
	}
	size = compute_size(base);
	if (size > 1 && check_base(base))
		convert(n, base, size);

}

int check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' ' || (base[i] > 8 && base[i] < 14))
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (j == i)
				j++;
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}



int
	compute_size(char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

void
	convert(long nbr, char *base, int size)
{
	long n;

	n = nbr;
	if (n > 0)
	{
		convert(n / size, base, size);
		write(1, &base[n % size], 1);
	}
}
