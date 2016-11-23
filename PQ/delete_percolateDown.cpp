template <typename T>
T PQ_ComplHeap<T>::defMax()
{
	T maxElem = (*heap)[0]; // backup top
	(*heap)[0] = heap->remove(size() - 1);   // 将末元素移到顶端
	percolateDown(heap, size(), 0);          // 然后实行下滤
	return maxElem;
}

template <typename T>
static Rank percolateDown(Vector<T> *A, Rank n, Rank i)
{
	Rank j;
	while (i != ( j = ProperParent(*A, n, i)))
	{
		swap(Node(*A, i), Node(*A, j));
		i = j;
	}
	return i;
}
