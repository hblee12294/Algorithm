template <typename T, typename VST>
void travPre_I1(BinNodePosi(T) x, VST &visit)
{
	Stack<BinNodePosi(T)> S;  // assitant stack
	if (x) S.push(x);   // push root into stack 
	while (!S.empty())
	{
		x = S.pop();
		visit(x->data);
		if (HasRChild(*x))
			S.push(x->rChild);     // rChild first in, last out
		if (HasLChild(*x))
			S.push(x->lChild);     // lChild last in, first our
	}
}