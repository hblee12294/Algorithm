template <typename T>
static Rank fibSearch(T *A, T const &e, Rank lo, Rank hi)
{
	Fib fib(hi - lo)   // initialize a fib list whose length is (hi - lo)
	while (lo < hi)
	{
		while (hi - lo < fib.get()) fib.prev(); // get the current fib, if hi - lo < fib.get(), get the previous fib
		if (e < A[mi])
			hi = mi;
		else if (A[mi] > e)
			lo = mi + 1;
		else 
			return mi;
	}
	return -1;   // if search fails
}