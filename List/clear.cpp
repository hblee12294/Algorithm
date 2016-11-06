template <typename T>
int List<T>::clear()
{
	int oldSize = _size;
	while (0 < _size)
		remove(header->succ);
	return oldSize;
}

template <typename T>
List<T>::~List()
{
	clear();          // clear out contents
	delete header;   // release header
	delete trailer;  // release trailer
}