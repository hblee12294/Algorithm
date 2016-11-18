template <typename T>
BinNodePosi(T) BST<T>::connect34(BinNodePosi(T) a, BinNodePosi(T) b, BinNodePosi(T) c,
								 BinNodePosi(T) T0, BinNodePosi(T) T1, BinNodePosi(T) T2, BinNodePosi(T) T3)
{
	a->lChild = T0; if (T0) T0->parent = a;                   // 不改变中序，构造新树，达到平衡
	a->rChild = T1; if (T1) T1->parent = a; updateHeight(a);
	c->lChild = T2; if (T2) T2->parent = c;
	c->rChild = T3; if (T3) T3->parent = c; updateHeight(C);
	b->lChild = a; a->parent = b;
	b->rChild = c; c->parent = b; updateHeight(b); 
}

template <typename T>
BinNodePosi(T) BST<T>::rotateAt(BinNodePosi(T) v)
{
	BinNodePosi(T) p = v->parent;    // 父亲
	BinNodePosi(T) g = p->parent;    // 祖父
	if (IsLChild(*p))   // zig
		if (IsLChild(*v))   // zig-zig
		{
			p->parent = g->parent;
			return connect34(v, p, g, v->lChild, v->rChild, P->lChild, p->rChild);
		}
		else      // zig-zag
		{
			v->parent = g->parent;
			return connect34(p, v, g, p->lChild, p->rChild, v->lChild, v->rChild);
		}
	else        // zag
	{
			/*-------------------zag-zig & zag-zag----------------------*/
	}
}