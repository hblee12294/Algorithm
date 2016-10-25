int sum(int A[], int lo, int hi)
{
	if (lo == hi)
		return A[lo];
	int mi = (lo + hi) >> 1;  // (>> = * 1/2)
	return sum(A, lo, mi) + sum(A, mi + 1, hi);
}