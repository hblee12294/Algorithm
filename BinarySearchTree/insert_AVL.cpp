template <typename T>
BinNodePosi(T) AVL<T>::insert(const T &)
{
	BinNodePosi(T) &x = search(e);
	if (x) return;                      // 存在e元素时，不插入
	x = new BinNode<T>(e, _hot);        // 构造新节点
	++_size;                            // 更新TREE大小
	for (BinNodePosi(T) g = x->parent; g; g = g->parent)   // 沿父节点一直搜寻
		if (!AvlBalanced(*g))              // if not Avl balanced
		{
			FromParentTo(*g) = rotateAt(tallerChild(tallerChild(g)));    // 调整，单旋或双旋，一次调整就可以平衡
			break;
		}
		else
			updateHeight(g);      // 不调整的话就每次更新高度
	return x;
}