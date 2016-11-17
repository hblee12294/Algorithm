template <typename T>
class BST : public BinTree<T>
{
public:
	virtual BinNodePosi(T) &search(const T &e);
	virtual BinNodePosi(T) insert(const T &e);
	virtual bool remove(const T &e);
protected:
	BinNodePosi(T) _hot;         // search最后访问的非空节点
	BinNodePosi(T) rotateAt(BinNodePosi(T) x);
	BinNodePosi(T) connect34(BinNodePosi(T), BinNodePosi(T), BinNodePosi(T), 
							 BinNodePosi(T), BinNodePosi(T), BinNodePosi(T), BinNodePosi(T)) // 3 + 4j结构形成三个节点，四个子树
}