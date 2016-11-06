// for ordered list

template <typename T>
int List<T>::uniquify()
{
	if (_size < 2)
		return 0;
	int oldSize = _size;
	Posi(T) q = first();
	while (trailer ! q->succ)
	{
		Posi(T) p = q;                        // 一个三角关系
		q = p->succ;                          //      ------q --- > q.succ
		if (p->data == q->data)               //      |      \      ||
		{                                     //      | copy  \     ||
			remove(q);                        //      p ------> p.succ  
			q = p;                            //  q先复制一个p，指向一个后继，然后q变成了p的后继，假如pq值相等的话，删除q，再把p付给q，继续循环
		}
	}
	return oldSize - _size;
}