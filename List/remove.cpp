template <typnename T>
T List<T>::remove(Posi(T) p)
{
	T e = p->data;
	p->pred->succ = p->succ;
	p->succ->pred = p->pred;
	delete p;
	_size--;
	return e;   // return backup of p's content
}