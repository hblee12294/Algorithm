
//ineffective version
template <typename T>
int Vector<T>::uniquify()
{
	int oldSize = _size;
	int i =0;
	while (i < (_size -1))
		(_elem[i] == _elem[i+1]) ? remove(_elem[i+1]) : ++i;
	return oldSize - _size;         // return the number of removed elements
}


// effective version
template <typename T>
int Vector<T>::uniquify()
{
	Rank i = 0, j = 0;
	while (++j < _size)
		if (_elem[i] != _elem[j]) _elem[++i] = _elem[j];
	_size = ++i;
	shink();
	return j - i;
}