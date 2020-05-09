void
	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int step;

	step = 0;
	while(step != size / 2)
	{
		i = *(tab + (size -1 - step));
		*(tab + (size -1 - step)) = *(tab + step);
		*(tab + step) = i;
		step ++;
	}
}

