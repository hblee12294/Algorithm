template <typename T>
static void goAlongLeftBranch(BinNodePosi(T) x, Stack<BinNodePosi(T)> &S)
{
	while (x)          // 沿左孩子深入，最终到达最左节点，也就是访问的第一个节点
	{
		S.push(x);
		x = x->lChild;
	}
}

template <typename T, typename VST>
void travIn_I1(BinNodePosi(T) x, VST &visit)
{
	Stack<BinNodePosi(T)> S;
	while (true)
	{
		goAlongLeftBranch(x, S);   // 把当前节点作为根节点，沿左一直深入，和第一次深入相同
		if (S.empty())
			break;
		x = S.pop();           // 弹出左节点
		visit(x->data);        // 访问左节点
		x = x->rChild;         // 进入右节点
	}
}