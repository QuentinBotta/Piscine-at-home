
unsigned int
	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i];
	return (size);
}
