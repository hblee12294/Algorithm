template <typename T>
BTNode(T) BTree<T>::search(const T &e)
{
	BTNodePosi(T) v = _hot = _root;
	while (true)
	{
		if (!v) return v;
		Rank r = v->data.search(e);
		if ((0 <= r)) && (e == v->data[r]) return v;
		_hot = v;
		v = v->child[r+1];
	}
}