template<typename T>
void PQ_LeftHeap<T>::insert(T e)
{
	BinNodePosi(T) v = new BinNode<T>(e);
	heap->root() = merge(heap->root(), v);
	heap->root()->parent = NULL;
	heap->size()++;
}

template <typename T>
T PQ_LeftHeap<T>::delMax()
{
	BinNodePosi(T) lHeap = heap->root()->lChild;
	BinNodePosi(T) rHeap = heap->root()->rChild;
	T e = heap->root()->data;
	delete heap->root();
	heap->size()--;
	heap->root() = merge(lHeap, rHeap);
	if (heap->root())
		heap->root()->parent = NULL;
	return e;
}