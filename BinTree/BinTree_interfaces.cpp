#define stature(p) ((p) ? (p)->height : -1)

template <typename T>
int BinTree<T>::updateHeight(BinNodePosi(T) x)
{
	return x->heigh = 1 + max(stature(x->lChild), stature(x->rChild));
}

template <typename T>
void BinTree<T>::updateHeightAbove(BinNodePosi(T) x)
{
	while (x)
	{
		updateHeight(x);
		x = x->parent;
	}
}

template <typename T>
BinNodePosi(T) BinTree<T>::insertAsRC(BinNodePosi(T) x, T const &e)   // similar with insertAsLC()
{
	++_size;
	x->insertAsRC(e);        // 用BinNode的insert函数
	updateHeightAbove(x);   // 更新上面节点的高度，新加入的高度没有变，注意高度和深度的区别
	return x->rChild;
}

template <typename T>
BinNodePosi(T) BinTree<T>::attachAsRC(BinNodePosi(T) x, BinTree<T> * &S)
{
	if (x->rChild = S->_root)     // 把新tree的根给x当右孩子
		x->rChild->parent = x;    // 把x给新tree的parent
	_size += S->_size;
	updateHeightAbove(x);
	S->_root = NULL;
	S->_size = 0;
	release(S);
	S = NULL;
	return x;
}

template <typename T>
int BinTree<T>::remove(BinNodePosi(T) x)
{
	FromParentTo(*x) = NULL;
	updateHeightAbove(x->parent);
	int n = removeAt(x);
	_size -= n;
	return n;   // return number of deleted nodes
}

template <typename T>
static int removeAt(BinNodePosi(T) x)
{
	if (!x) return 0;
	int n = 1 + removeAt(x->lChild) + removeAt(x->rChild);  // 从左右孩子分别递归删除，并将删除个数赋给n
	release(x->data);
	release(x);
	return n;
}

template <typename T>
BinTree<T> *BinTree<T>::secede(BinNodePosi(T) x)
{
	FromParentTo(*x) = NULL;
	updateHeightAbove(x->parent);
	BinTree<T> *S = new BinTree<T>;
	S->_root = x;
	x_parent = NULL;
	S->_size = x->_size();
	_size -= S->_size;
	return S;           // return the new tree
}