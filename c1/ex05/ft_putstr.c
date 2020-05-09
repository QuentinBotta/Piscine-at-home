#include <unistd.h>

void
	ft_putstr(char *str)
{
	int state;

	state = 0;
	while (*(str + state) != 0)
	{
		write(1, (str + state), 1);
		state ++;
	}
}
