template <typename T>
void List<T>::copyNodes(Posi(T) p, int n)
{
	init();
	while (n--)
	{
		insertAsLast(p->data);
		p = p->succ;
	}
}

List<T>::List(List<T> const &L)    // copy constructor, copy all
{
	copyNodes(L.fist(), L._size);
}

List<T>::List(List<T> const &L, int r, int n)   // overload, copy a part of List
{
	copyNodes(L[r], n);
}