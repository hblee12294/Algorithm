template <typename T, typename VST>
void traverse(BinNodePosi(T) x, VST &visit)  // preorder
{
	if (!x)
		return;
	visit(x->data);
	traverse(x->lChild, visit);
	traverse(x->rChild, visit);
}