
int compute(int index, int i, int j);

int
	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (compute(index - 2, 0, 1));
}

int
	compute(int index, int i, int j)
{
	if (index != 0)
		return (compute(index - 1, j, i + j));

	return (i + j);
}
