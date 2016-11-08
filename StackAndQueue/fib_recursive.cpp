#include <cstdlib>

int fib(int n)
{
	return (2 > n) ? n : fib(n-1) + fib(n-2);
}

main(int argc, char *argv[])
{
	fib(atoi(argv[1]));
}