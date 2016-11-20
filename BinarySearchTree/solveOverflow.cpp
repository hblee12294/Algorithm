template <typename T>
void BTree<T>::solveOverflow(BTNodePosi(T) v)
{
	if (_order >= v->child.size()) return;        // 递归基
	Rank s = _order/2;
	BTNodePosi(T) u = new BTNode<T>();
	for (Rank j = 0; j < _order-s-1; ++j)
	{

	}
	u->child[_order-s-1] = v->child.remove(s+1);
	if (u->child[0])
		for (Rank j = 0; j < _order-s; ++j)
			u->child[j]->parent = u;
	BTNodePosi(T) p = v->parent;
	if (!p)
	{
		_root = p = new BTNode<T>();
		p->child[0];
		v->parent = p;
	}
	Rank i = 1 + p->data.search(v-<data[0]);
	p->data.insert(r, v-<data.remove(s));
	p->child.insert(r+1, u);
	u->parent = p;
	solveOverflow(p);;
}