template <typename T>
class PQ_ComplHeap : public PQ<T>
{
private:
	Vector<T> *heap;
public:
	PQ_ComplHeap(T *E, int n) { heap = new Vector<T>(heapify(E, n), n); } // 批量制造
	int size() { return heap->size(); }          // 查询当前的规模，此处调用的是heap的也就是Vector的size()
	bool empty() { return heap->empty(); }
	void insert(T);
	T getMax() { return (*heap)[0]; }
	T defMax() {}
};