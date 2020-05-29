#include <unistd.h>

char
	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			if (to_find[j] == '\0')
				return (str + (i - j));
			j++;
		}
		else
			j = 0;
		i++;
	}
	return (NULL);
}
