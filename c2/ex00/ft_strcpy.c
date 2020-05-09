#include <stdio.h>

char
	*ft_strcpy(char *dest, char *src)
{
	*dest = *src;
	return (*dest);
}

int main()
{
	char *sr = "abcd";
	char *des = "caca";

	*ft_strcpy(des, sr);
	printf("%p", des);
}
