template <typename T>
static void gotoHLVFL(Stack<BinNodePosi(T)> &S)
{
	while (BinNodePosi(T) x = S.top())
		if (HasLChild(*x))               // 如果有左孩子，尽量沿左
		{
			if (HasRChild(*x))           // 如果有右孩子，则入栈
				S.push(x->rChild);
			S.push(x->lChild);           // 然后入左孩子，这样弹出的时候先访问左孩子，再访问右孩子
		}
		S.push(x->rChild);               // 如果一开始没有左孩子的话，说明树朝右拐了，
	S.pop();                             // 弹出最后推入的空元素
}