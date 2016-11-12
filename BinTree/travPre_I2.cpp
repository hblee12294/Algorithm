template <typename T, typename VST>
static void visitAlongLeftBranch(BinNodePosi(T) x, VST &visit, Stack<BinNodePosi(T)> &S)
{
	while (x)
	{
		visit(x->data);
		S.push(x->rChild);  // 逆序出栈并访问
		S.push(x->lChild);
	}	
}

template <typename T, typename VST>
void travPre_I2(BinNodePosi(T) x, VST &visit)  // 一路沿着左孩子前进的过程
{
	Stack<BinNodePosi(T)> S;
	while (true)
	{
		visitAlongLeftBranch(x, visit, S);  // 从左孩子visit右孩子的过程，其内部过程等同于I1版本
		if (S,empty())
			break;
		x = S.pop();  // 从每个左孩子回退的过程
	}
}