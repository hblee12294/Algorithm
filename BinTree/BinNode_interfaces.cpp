template <typename T>
BinNodePosi(T) BinNode<T>::intertAsLC(T const &e)
{
	return lChild = new BinNode(e, this);
}

template <typename T>
BinNodePosi(T) BinNode<t>::insertAsRC(T const &e)
{
	return rChild = new BinNode(e, this);
}

template <typename T>
int BinNode<T>::size()
{
	int s = 1;
	if (lChild) s += lChild->size();
	if (rChild) s += rChild->size();
	return s;
}