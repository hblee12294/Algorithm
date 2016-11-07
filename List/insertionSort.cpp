template <typename T>
void List<T>::insertionSort(ListNodePosi(T) p, int n)
{
	for (int r = 0; r < n; ++r)
	{
		insertAfter(search(p->data, r, p), p->data);  // c从p前r个元素中，也就是前缀有序子序列中找到不大于p->data的最大位置，然后把data插入
		p = p->succ;   // p往后走一步
		remove(p->pred);  // 删除原p
	}
}