template <typename T>
BinNodePosi(T) &Splay<T>::search(const T&e)   // 不管search成不成功都要做伸展
{
	BinNodePosi(T) p = searchIn(_root, e, _hot, = NULL);  // 先调用BST的search
	_root = splay((p ? p : _hot));               // 成功的话，对返回的p做伸展，失败的话，对_hot做伸展(因为它是最后一个被访问的)
	return _root;
}