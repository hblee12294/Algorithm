template <typename T>
BinNodePosi(T) &BST<T>::search(const T &e)
{
	return searchIn(_root, e, _hot = NULL);
}

static BinNodePosi(T) &searchIn(BinNodePosi(T) &v, const T &e, BinNodePosi(T) &hot)  // arg1-起节点，arg2-查找的元素，arg3-当前最后访问的节点
{
	if (!v || (e == v-> data))     //如果是空节点或者是命中，返回当前结点
		return v;
	hot = v;         // 更新最后访问的节点
	return searchIn(((e < v->data) ? v->lChild : v->rChild), e, hot);       // 递归搜索
}