#include <unistd.h>

void
	ft_write_name(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		write(1, &c[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	char *c;

	c = argv[0];
	ft_write_name(c);
}
