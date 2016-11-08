template <typename T>
class Stack: public Vector<T>
{
public:
	void push(T const &e) { insert(size(), e); } // 入栈顶
	T pop() { return remove(size() - 1); }   // 从栈顶弹出一个元素
	T &top { return (*this)[size() - 1]; }   // 返回栈顶的元素
}