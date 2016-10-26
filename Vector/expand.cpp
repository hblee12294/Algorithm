#include "Vector.h"

template<typename T>
void Vector<T>::expand()
{
	if (_size < _capacity)
		return;
	_capacity = max(_capacity, DEFAULT_CAPACITY); // 保证大于默认容量
	T *oldElem = _elem;
	_elem = new T[_capacity * 2]   // 以两倍的规模扩增
	for (int i = 0; i < _size; ++i)
		_elem[i] = oldElem[i];
	delete [] oldElem;
}