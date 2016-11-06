template <typename T>
Posi(T) List<T>::find(T const &e, int n, Posi(T) p) const     // find e from n successors at p
{
	while (0 < n--)
		if (e == (p = p->pred)->data)  // find backward
			return p;
	return NULL;
}

// overload

Posi(T) find(T const &e) const      // find globally, from trailer to header
{
	return find(e, _size, trailer);
}