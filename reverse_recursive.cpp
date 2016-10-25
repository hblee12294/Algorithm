
void reverse(int *A, int lo, int hi)  // hi is the last item
{
    extern void swap(int &, int &);
	if (lo < hi)
	{
		swap(A[lo], A[hi]);
		reverse(A, lo + 1, hi -1);
	}
}
