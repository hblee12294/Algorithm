int fac(int n)
{
	int f = 1;
    for (; n > 0; --n)
		f *= n;
	return f;
}
