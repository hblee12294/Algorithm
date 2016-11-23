template <typename T>
T *heapify(T *E, Rank lo, Rank hi)
{
	for (int i = LastInternal(hi - lo); i >= 0; --i)
		percolateDown(E + lo, hi - lo, i);  // 原理见图
	return E;
}