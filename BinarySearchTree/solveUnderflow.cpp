template <typename T>
void BTree<T>::solveUnderflow(BTNodePosi(T) v)
{
	if ((_order + 1) / 2 <= v->child.size()) return;
	BTNodePosi(T) p = v->parent;
	if (!p)
	{

	}
	Rnak r = 0;
	while (p->child[r] != v) ++r;
	if (0 < r)
	{

	}
	if (p->child.size() - 1 > r)
	{

	}
	if (0 < r)
	{

	}
	else
	{

	}
	solveUnderflow(p);
	return;
}