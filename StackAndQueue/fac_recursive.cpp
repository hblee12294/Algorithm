#include <cstdlib>

int fac(int n)
{
	return (2>n) ? 1 : n * fac(n-1);
}

mai(int argc, char *argv[])
{
	fac(atoi(argv[1]));
}