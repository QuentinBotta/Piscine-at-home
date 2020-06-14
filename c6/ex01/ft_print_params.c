#include <unistd.h>

void
	write_param(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		write(1, &c[i], 1);
		i++;
	}
}

int
	main(int argc, char *argv[])
{
	char *c;
	int i;

	i = 1;
	while (argv[i] != '\0')
	{
		c = argv[i];
		write_param(c);
		write(1, "\n", 1);
		i++;
	}
}
