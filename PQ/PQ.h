template <typename T>
class PQ
{
public:
	virtual int size() = 0;
	bool empty() { return !size(); }
	virtual void insert(T) = 0;
	virtual T getMax() = 0;
	virtual T delMax() = 0;
}