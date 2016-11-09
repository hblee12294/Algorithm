#include <iostream>

void convert(Stack<char> &s, __int64 n, int base)
{
	static char digit[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'
							'A', 'B', 'C', 'D', 'E', 'F'};
	while (0 < n)
	{
		S.push(digit[n % base]);
		n /= base;
	}
}

void main()
{
	Stack<char> S;
	convert(S, n, base);
	while (!S.empty())
		cout << S.pop();
}