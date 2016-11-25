template <typename T>
class PQ_LeftHeap : public PQ<T>
{
private:
	BinTree<T> *heap;
public:
	int size() { return heap->size(); }
	bool empty() { return heap->empty(); }
	void insert(T);
	T getMax();
	T delMax();
}