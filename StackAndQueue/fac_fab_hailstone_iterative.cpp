int fac(int n)
{
	int f = 1;
	while (n > 1)
	f *= n--;
	return f;
}

int fib(int n)
{
	int f = 1;
	int g = 0;
	while (0 < n--)
	{
		f = f + g;
		g = f - g;
	}
	return g;
}

void hailstone(int n)
{
	while (1 < n)
		n = (n % 2) ? (3*n + 1) : (n / 2);
}