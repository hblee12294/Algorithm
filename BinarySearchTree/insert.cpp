template <typename T>
BinNodePosi(T) BST<T>::insert(const T &e)
{
	BinNodePosi(T) &v = search(e);      // 找到需要插入的点(两种情况:查找成功-返回tree中e的位置，查找失败-返回查找访问的最后一个节点)
	if (!v)                             // 不允许插入相同的元素，所以只有查找失败才能插入
	{
		v = new BinNode<T>(e, _hot);
		++_size;
		updateHeightAbove(v);
	}
	return v;
}