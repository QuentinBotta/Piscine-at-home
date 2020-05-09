#include <unistd.h>

void
	ft_putchar(char c)
{
	write(1, &c, 1);
}

void
	ft_putnbr(int nb)
{
	long n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 10)
		ft_putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

int
	main(void)
{
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(4242);
	ft_putchar('\n');
	ft_putnbr(20000706);
	ft_putchar('\n');
	ft_putnbr(+2147483647);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
}
