void
	ft_ultimate_div_mod(int *a, int *b)
{
		int caca;

		caca = *a / *b;
		*b = *a % *b;
		*a = caca;
}
