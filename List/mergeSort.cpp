template <typename T>
void List<T>::mergeSort(Posi(T) p, int n)
{
	if (n < 2)
		return;
	Posi(T) q = p;
	int m = n >> 1;
	for (int i = 0; i < m; ++i)
		q = q->succ;
	mergeSort(p,m);
	mergeSort(q, n-m);
	merge(p, m, *this, q, n-m);    // 该算法核心，递归的实际操作步
}

template <typename T>
void List<T>::merge(Posi(T) &P, int n, List<T> &L, Posi(T) q, int m)  // n为前半部分长度，m为后半部分长度
{
	while (0 < m)                                 // 当m=0时就是后半区间已经缩减为0
		if ((0 < n) && (p->data <= q->data))     // 长度还大于0(?)，且，p和q本来就是顺序的
		{
			if (q == (p = p->succ))               // 那么pq不用换，直接p向前走一步
				break;
			--n;
		}
		else                                     // 如果pq为逆序的话
		{
			insertBefore(p, L.remove((q = q->succ)->pred));   // pq需要互换位置，互换的方法是，先把后者(q)删除，然后remove的返回插入到前者(p)之前
			--m;
		}
}