template <typename T>
int List<T>::deduplicate()
{
	if (_size < 2)
		return 0;
	int oldSize = _size;
	Posi(T) p = first();
	Rank r = 1;
	while (trailer != (p = p->succ))
	{
		Posi(T) q = find(p->data, r, p);   // 代码重用，里面含循环了，外面一层循环就够了
		q ? remove(q) : r++;               // 找到-》删除； 未找到-》秩+1
	}
	return oldSize - _size;   // 返回删除后得大小
}