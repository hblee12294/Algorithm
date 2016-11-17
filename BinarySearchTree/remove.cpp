template <typename T>
bool BST<T>::remove(const T &e)
{
	BinNodePosi(T) &v = search(e);
	if (!v)
		return false;
	removeAt(v, _hot);
	--_size;
	updateHeightAbove(_hot);
	return true;
}


template <typename T>
static BinNodePosi(T) removeAt(BinNodePosi(T) &v, BinNodePosi(T) &hot)
{
	BinNodePosi(T) w = v;         // w, v 为要删除的那个点
	BinNodePosi(T) succ = NULL;   // 删除节点的后继
	if (!HasLChild(*v))       // 存在左孩子，后继为左孩子
		succ = v = v->rChild; 
	else if (!HasRChild(*v))  // 存在右孩子，后继为右孩子
		succ = v = v->lChild;
	else                      // 左右孩子都存在
	{
		w = w->succ();        // w取直接后继（即比当前点次小的那个节点）
		swap(v->data, w->data);   //将删除点与直接后继交换
		BinNodePosi(T) u = w->parent;  // u为删除点的parent
		((u == v) ?  u->rChild : u->lChild) = succ = w->rChild;      // 把删除点的右孩子给后继，并给到parent的左孩子或者右孩子(取决于删除点的parent是否是前面替换的直接后继)
	}
	hot = w->parent;
	if (succ) succ->parent = hot;
	release(w->data);
	release(w);
	return succ;
}