
int sum(int A[], int n)  // sum n items 
{
	return (n < 1) ? 0 : sum(A, n-1) + A[n-1]; 
}