template <typename T>
void Vector<T>::traverse(void (*visit)(T &))  // visit is a function pointer
{
	for (int i = 0; i < _size; ++i)
		visit(_elem[i]);                      // 'visit' function does effects
}


template <typename T>
void Vector<T>::traverse(VST &visit)          // visit is a function object
{
	for (int i = 0; i < _size; ++i)
		visit(_elem[i]);
}