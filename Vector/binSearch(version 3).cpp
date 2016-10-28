template <typename T>
static Rank binSearch(T * A, T const &e, Rank lo, Rank hi)
{
	while (lo < hi)
	{
		Rank mi = (lo + hi) >> 1;
		(e < A[mi]) ? hi = mi : lo = mi + 1;
	}

	return --lo; // 返回不大于e元素的最大Rank，假如初始的lo为0的话， 自然返回lo-1=-1了
}