template <typename T>
BTNodePosi(T) BTree<T>::insert(const T &e)
{
	BTNodePosi(T) v = search(e);      // 查找目标节点
	if (!v)
	{
		Rnak r = _hot->data.search(e);   // 查找节点内位置
		_hot->data.inset(r+1, e);
		_hot->child.insert(r+1, NULL);
		++_size;
		solveOverflow(_hot);
	}
}