template <typename H, typename T>
void testHeap(int n)                      // 统一测试程序
{
	T *elem = new T[n/3];
	for (int i = 0; i < n/3; ++i)
		elem[i] = dice((T)3 * n);
	H *heap = new H(elem, n/3);           // Robert Floyd建堆法
	delete [] elem;
	while (heap->size() < n)
		if (dice(100) < 70)
			heap->insert(dice((T)3 * n));
		else
			if (!heap->empty())
				heap->delMax();
	while (!heap->empty())
		heap->delMax;
	release(heap);
}