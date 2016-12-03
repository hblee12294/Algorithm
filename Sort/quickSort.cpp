template<typename T>
void Vector<T>::quickSort(Rank lo, Rank hi)
{
	if (hi - lo < 2) return;          // base case
	Rank mi = partition(lo, hi - 1);  // get pivot point
	quickSort(lo, mi);
	quickSort(mi, hi);
}

template <typename T>
Rank Vector<T>::partition(Rank lo, Rank hi)
{
	swap(_elem[lo], _elem[lo + rand() % (hi - lo + 1)]);
	T pivot = _elem[lo];              // 选择最低位为pivot
	while (lo < hi)
	{
		while ((lo < hi) && (pivot <= _elem[hi])) --hi;
		_elem[lo] = _elem[hi];
		while ((lo < hi) && (_elem[lo] <= pivot)) ++lo;
		_elem[hi] = _elem[lo];
	}
	_elem[lo] = pivot;
	return lo;
}


/*-------------- methods 2 ---------------*/

template <typename T>
Rank Vector<T>::partition(Rank lo, Rank hi)
{
	swap(_elem[lo], _elem[lo + rand() % (hi - lo + 1)]);
	T pivot = _elem[0];  // 随机选择pivot
	while (lo < hi)
	{
		while ((lo < hi) && (pivot <= _elem[hi])) hi--; // R add 1
		if (lo < hi) _elem[lo++] = _elem[hi];  // 小于轴点归入L
		while ((lo < hi) && (_elem[lo] <= pivot)) lo++;  // L sub 1
		if (lo < hi) _elem[hi--] = _elem[lo];  // 大于轴点归入R
	}
	_elem[lo] = pivot;
	return lo;
}




/*------------- 3 -----------------*/

template <typename T>
Rank Vector<T>::partition(Rank lo, Rank hi)
{
	swap(_elem[lo], _elem[lo + rand() % (hi - lo + 1)]);
	T pivot = _elem[lo];
	int mi = lo;
	for (int k = lo + 1; k <= hi; ++k)
		if (_elem[k] < pivot)
			swap(_elem[++mi], _elem[k]);
	swap(_elem[lo], _elem[mi]);
	return mi;
}