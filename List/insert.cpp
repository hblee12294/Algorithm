template <typename T>
ListNodePosi(T) List<T>::insertBefore(ListNodePosi(T) p, T const &e)
{
	_size++;
	return p->insertAsPred(e);
}

template <typename T>
Posi(T) ListNode<T>::insertAsPred(T const &e)
{
	Posi(T) x = new ListNode(e, pred, this);
	pred->succ = x;
	pred = x;
	return x;  // return new node
}

// insertAsLast()

template <typename T>
Posi(T) ListNode<T>::insertAsLast(T const &e)
{
	Posi(T) x = new ListNode(E, this, succ);
	succ->pred = x;
	succ = x;
}