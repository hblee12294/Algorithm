#include <iostream>

void move(char X, char Y)
{
	std::cout << X << " -> " << Y << std::endl;
}

void hanoi(int n, char X, char Y, char Z)  // X -> Z by Y
{
	if (n > 0)
	{
		hanoi(n-1, X, Z, Y);   // X -> Y by Z
		move(X, Y);           // the last X -> Z
		hanoi(n-1, Y, X, Z);  // Y - > Z by X
	}
}

