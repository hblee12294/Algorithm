template <typename T>
bool BTree<T>::remove(const T &e)
{
	BTNodePosi(T) v = search(e);
	if (!v) return false;
	Rank r = v->data.search(e);
	if (v->child[0])
	{
		BTNodePosi(T) u = v->child[r+1];
		while (u->child[0]) u = u->child[0];
		v->data[r] = u->data[0];
		v = u;
		r = 0;
	}
	v->data.remove(r);
	v->child.remove(r);
	--_size;
	solveOverflow(v);
	return true;
}