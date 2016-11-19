template <typename T>
BinNodePosi(T) Splay<T>::splay(BinNodePosi(T) v)
{
	BinNodePosi(T) p;    // parent
	BinNodePosi(T) g;    // grandparent
	while ((p = v->parent) && (g = p->parent))  // 反复父与祖父，自下而上
	{
		BinNodePosi(T) r = g->parent;  // 曾祖父为原来曾祖父为父
		if (IsLChild(*v))              // 当前节点为左孩子
			if (IsLChild(*p)) { /* zig-zig */ } else { /* zig-zag */ }
		else if (IsRChild(*p)) { /* zag-zag */ } else { /* zag-zag */ }
		if (!r)    // 如果无曾祖父，*v应为树根
			v->parent = NULL;
		else 
			(g == r->lChild) ? attachAsLChild(r, v) : attachAsRChild(r, v);    // 以*v为左右孩子
		updateHeight(g);
		updateHeight(p);
		updateHeight(v);
	}
	if (p = v->parent) { /* 单旋 */ }
	v->parent = NULL;
	return v;  // v到达树根
}

/* zig-zig，zig-zag */
if (IsLChild(*v))
	if (IsLChild(*p))
	{
		attachAsLChild(g, p->rChild);
		attachAsLChild(p, v->rChild);
		attachAsRChild(p, g);
		attachAsRChild(v, p);
	}
	else
	{
		attachAsLChild(p, v->rChild);
		attachAsRChild(g, v->rChild);
		attachAsLChild(v, g);
		attachAsRChild(v, p);
	}
else
{
	/* zag-zig, zag-zag */
}