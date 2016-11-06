template <typename T>
void List<T>::traverse(void (*vist)(T&))     // function pointer
{
	Posi(T) p = header;
	while ((p = p->succ) != trailer) visit(p->data);
}

template <typename T>
template <typename VST>
void List<T>::traverse(VST &visit)            // function object
{
	Posi(T) p = header;
	while ((p = p->succ) != trailer) visit(p->data);
}