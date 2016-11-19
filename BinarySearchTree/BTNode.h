template <typename T>
class BTNode
{
public:
	BTNodePosi(T) parent;
	Vector<T> data;
	Vector<BTNodePosi> child;
	BTNode() { parent = NULL; child.insert(0, NULL); }
	BTNode(T e, BTNodePosi(T) lc = NULL, BTNodePosi(T) rc = NULL)
	{
		parent = NULL;
		data.insert(0, e);
		child.insert(0, lc);
		child.insert(1,rc);
		if (lc) lc->parent = this;
		if (rc) rc->parent = this;
	}
};

#define BTNodePosi(T) BTNode<T> *
template <typename T>
class BTree
{
protected:
	int _order, _size;
	BTNodePosi(T) _root;
	BTNodePosi(T) _hot;
	void solveOverflow(BTNodePosi(T));  // 上溢处理
	void solveUnderflow(BTNodePosi(T));  // 下溢处理
public:
	BTNodePosi(T) search(const T &e);
	BTNodePosi(T) insert(const T &e);
	bool remove(const T &e);
}