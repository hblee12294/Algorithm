template <typename T>
static BinNodePosi(T) merge(BinNodePosi(T) a, BinNodePosi(T) b)
{
	if (!a) return b;
	if (!b) return a;  // 退化
	return lt(a->data, b->data) ? merge1(b, a) : merge1(a, b);
}

static BinNodePosi(T) merge1(BinNodePosi(T) a, BinNodePosi(T) b)
{
	if (!HashLChild(*a))
	{
		a->lChild = b;;
		b->parent = a;
	}
	else
	{
		a->rChild = merge(a->rChild, b);
		a->rChild->parent = a;
		if (a->lChild->npl < a->rChild->npl)
			exchangeChildren(a);
		a->npl = a->rChild->npl + 1;
	}
	return a;
}