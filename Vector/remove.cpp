template <typename T>
int Vector<T>::remove(Rank lo, Rank hi)
{
	if (lo == hi)
		return 0;
	while (hi < _size)               // loop 直到向量末尾
		_elem[lo++] = _elem[hi++];
	_size = lo;
	shrink();
	return hi - lo; // 返回被删去区间的大小
}