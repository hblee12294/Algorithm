template <typename T>
int Vector<T>::deduplicate()
{
	int oldSize = _size;
	Rank i = 1;
	while (i < _szie)
		(find(_elem[i], 0, i) == 0) ++i : remove(i);
	return oldSize - _size;    // return the number of removed elements
}