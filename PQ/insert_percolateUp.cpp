template <typename T>
void PQ_ComplHeap<T>::insert(T e)
{
	heap->insert(size(), e);
	percolateUp(heap, size() - 1);
}

template <typename T>
static Rank percolateUp(Vector<T> *A, Rank i)
{
	while (ParentValid(i))
	{
		Rank j = Parent(i);  // j is i's parent
		if (lt(Node(*A, i), Node(*A, j))) break;     // if i less than j, then break since there's no reverse between child and parent
		swap(Node(*A, i), Node(*A, j));
		i = j;
	}
	return i;
}