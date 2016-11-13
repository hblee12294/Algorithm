template <typename T, typename VST>
void traverse(BinNodePosi(T) x, VST &visit)
{
	if (!x)
		return;
	traverse(x->lChild, visit);
	visit(x->data);
	traverse(x->rChild, visit);
}