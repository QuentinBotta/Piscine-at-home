#include <unistd.h>

int
	check_order(char *c, char *d)
	{
		int i;

		i = 0;
		while (c[i] != '\0')
		{
			if (c[i] != d[i])
				return (c[i] - d[i]);
			i++;
		}
		return (0);
	}

void
	ft_write_param(int argc, char **c)
{
	int i;
	int j;
	char *d;

	i = 0;
	j = 1;
	while(j < argc)
	{
		d = c[j];
		while (d[i] != '\0')
		{
			write(1, &d[i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

void
	ft_swap(char **c, int i)
{
	char *d;

	d = c[i];
	c[i] = c[i + 1];
	c[i + 1] = d;
}

int
	main(int argc, char *argv[])
{
	int i;
	int b;
	char *c;
	char *d;

	i = 1;
	b = 1;
	while (b)
	{
		b = 0;
		while (i < argc - 1)
		{
			c = argv[i];
			d = argv[i + 1];
			if (check_order(c, d) > 0)
				{
					b = 1;
					ft_swap(argv, i);
				}
			i++;
		}
		i = 1;
	}
	ft_write_param(argc, argv);
}
