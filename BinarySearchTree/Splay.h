template <typename NodePosi>
inline void attachAsLChild(NodePosi p, NodePosi lc)
{
	p->lChild = lc;
	if (lc)
		lc->parent = p;
}

inline void attachAsRChild(NodePosi p, NodePosi rc)
{
	p->rChild = rc;
	if (rc)
		rc->parent = p;
}

template <typename T>
class Splay : public BST<T>
{
protected:
	BinNodePosi(T) splay(BinNodePosi(T) v);  // 延展过程
public:
	BinNodePosi(T) &search(const T &e);    // search会引起树结构的变化，重写
	BinNodePosi(T) insert(const T &e);    // 重写
	bool remove(const T &e);              // 重写
}