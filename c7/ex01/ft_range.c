#include <stdlib.h>
#include <unistd.h>

int
	*ft_range(int min, int max)
{
	int i;

	i = max - min + 1;
	if (i < 1)
		return (NULL);
	int *x = malloc(4 * i);
	i = 0;
	while (min + i <= max)
	{
		x[i] = min + i;
		i++;
	}
	return (x);
}
