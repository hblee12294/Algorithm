
void reverse(int *A, int lo, int hi)  // hi is the last item
{
    extern void swap(int &, int &);
	while (lo < hi)
		swap(A[lo++], A[hi--]);
}
