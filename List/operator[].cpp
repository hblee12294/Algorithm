template <typename T>
Posi(T) List<T>::operator[](int r) const 
{
	Posi(T) p = first();
	while (0 < r--) p = p->succ;  // find forward
	return p;
}