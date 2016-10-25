
int sum(int A[], int n)  // sum n items
{
	int sum = 0;
	while (n > 0)
		sum += A[--n];
	return sum;
}