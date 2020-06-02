#include <unistd.h>

void
	long_to_hexa(unsigned long nb);
void
	location(unsigned char *str, int current_letter);
void
	letters(int a, unsigned char *str, int nb, int i);
void
	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char *str;
	unsigned int i;

	str = (unsigned char *) addr;
	i = 0;
	location(str, i);
	while(i < size)
	{
		write(1, &"0123456789abcdef"[str[i]/16], 1);
		write(1, &"0123456789abcdef"[str[i]% 16], 1);
		if ((i + 1) % 2 == 0)
			write(1, " ", 1);
		if ((i + 1) % 16 == 0)
			letters(i - 15, str, 16, i);
		i++;
	}
	letters(i - 15, str, i % 16, 0);
	return (addr);
}

int             main(void)
{
        char    *string;

        string = "Bonjour les aminches\t\n\tc  est fou.tout.ce qu on peut faire avec...print_memory....lol.lol. ";
        ft_print_memory(string, 149);
}

void
	letters(int a, unsigned char *str, int nb, int j)
{
	int i;

	i = 16 - nb;
		while (i != 0)
		{
			if (i % 2 == 0)
				write(1, "  ", 2);
			else
				write(1, "   ", 3);
			i --;
		}
	i = 0;
	while (i < nb)
	{
		if (str[i + a] < ' ' || str[i + a] == 127)
			write(1, ".", 1);
		else
			write(1, &str[i + a], 1);
		i++;
	}
	write(1, "\n", 1);
	if (j != 0)
		location(str, j);
}

void
	location(unsigned char *str, int current_letter)
{
	unsigned long address;

	address = (unsigned long) str;
	address += current_letter;
	long_to_hexa(address);
	write(1, ":", 1);
	write(1, " ", 1);

}

void
	long_to_hexa(unsigned long nb)
{
	unsigned long l;
	char c;

	l = nb;
	l = l % 16;
	if (l < 10)
		l += 48;
	else
		l += 87;
	c = 0 + l;
	if (nb > 16)
	{
		l = nb / 16;
		long_to_hexa(l);
	}
	write(1, &c, 1);
}
