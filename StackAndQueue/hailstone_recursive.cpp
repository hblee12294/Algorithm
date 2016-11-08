#include <cstdlib>

hailstone(int n)
{
	if (2 > n)
		return;
	n % 2 ? odd(n) : even(n);
}

even(int n)
{
	hailstone(n / 2);
}

odd(int n)
{
	hailstone(3*n + 1);
}

main(int argc, char *argv[])
{
	haistone(atoi(argv[1]));
}