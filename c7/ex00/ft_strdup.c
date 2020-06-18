#include <stdlib.h>
#include <unistd.h>

char
	*ft_strdup(char *src)
{
	int i;

	i = 0;
	while(src[i - 1] != '\0')
	{
		i++;
	}
	if(malloc(i) == NULL)
		return (NULL);
	char *c = malloc(i);

	i = 0;
	while(src[i] != '\0')
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
