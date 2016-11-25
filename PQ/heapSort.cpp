template <typename T>
void Vector<T>::heapSort(Rank lo, Rank hi)
{
	heapify(_elem, lo, hi);
	while (hi - lo > 1)   // 迭代至少于两个元素
	{
		--hi;      // 堆区减小一单元
		swap(_elem[lo], _elem[hi]);   // 堆顶尾互换
		percolateDown(_elem, hi - lo, lo);   // 新堆顶下滤
	}
}