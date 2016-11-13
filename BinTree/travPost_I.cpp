template <typename T, typename VST>
void travPost_I(BinNodePosi(T) x, VST &visit)
{
	Stack<BinNodePosi(T)> S;
	if (x)                    // 根入栈
		S.push();
	while (!S.empty())
	{
		if (S.top() != x->parent)  // 栈顶非当前节点x之父，说明其必然是右兄，推入过程看上一次gotoHLVFL
			gotoHLVFL(S);          // 以当前节点为根再做gotoHLVFL
		x = S.pop();               // 当前到头了，可以访问了，可能是左孩子，也可能是右孩子
		visit(x->data);
	}
}