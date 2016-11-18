template <typename T>
bool AVL<T>::remove(const T &e)
{
	BinNodePosi(T) &x = search(e);
	if (!x) return false;
	removeAt(x, _hot);         // 调用BST的removeAt
	--_size;
	for (BinNodePosi(T) g = _hot; g; g->parent)  // 从_hot出发检查parent们是否失衡
	{
		if (!AvlBalanced(*g))
			g = FromParentTo(*g) = rotateAt(tallerChild(tallerChild(g)));
		updateHeight();
	}
	return true;
}