template <typename T>
void List<T>::selectionSort(Posi(T) p, int n)  // for n items starting from p
{
	Posi(T) head = p->pred;
	Posi(T) tail = p;
	for (int i = 0; i < n; ++i)
		tail = tail->succ;
	while (i < n)                  // n是head到tail的距离
	{
		insertBefore(tail, remove(selectMax(head->succ, n)));   // 这个很巧，现在前序里找出最大，从list里剔除出去，又因为remove返回该元素，所以可以直接加到tail之前
		tail = tail->pred;     // tail向前走一步
		--n;                   // 距离缩短一步
	}
}

template <typename T>
Posi(T) List<T>::selectMax(Posi(T) p, int n)
{
	Posi(T) max = p;
	for (Posi(T)  cur = p; 1 < n; --n)                // 因为Posi(T)实际是指针，所以找Max的时候必须复制一个list进行curse
		if (!lt((cur = cur->succ)->data, max->data))  // lt means largerThan() function
			max = cur;
	return max;   // 返回最大元素
}