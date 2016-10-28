template <typename T>
int Vector<T>::disordered() const       // check disordered pairs
{
	int n = 0;
	for (int i = 1; i < _size; ++i)
		n += (_elem[i-1] > _elem[i]);
	return n;                           // return the sum
}