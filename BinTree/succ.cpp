template <typename T>
BinNodePosi(T) BinNode<T>::succ()  // 中序下
{
	BinNodePosi(T) s = this;
	if (rChild)
	{
		s = rChild;
		while (HasLChild(*s))
			s = s->lChild;
	}
	else
	{
		while (IsRChild(*s))
			s = s->parent;
		s = s->parent;
	}
	return s;
}