#include <unistd.h>

void
	ft_putnbr(int nb)
{
	int i;
	char c;

	i = nb;
	if (i < 0)
	{
		c = '-';
		i *= -1;
		write(1, &c, 1);
	}
	if (i > 0)
	{
		c = '0';
		c += i % 10;
		i /= 10;
		ft_putnbr(i);
		write(1, &c, 1);
	}
}
