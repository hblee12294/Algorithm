template <typename T>
Posi(T) List<T>::search(T const &e, int n, Posi(T) p) const   // find 和 search 的区别在于一个是查找元素，一个是定位元素，前者针对无序list，后者针对有序list
{
	while (0 <= n--)
		if (((p = p->pred)->data) <= e) break;  // search backwa
	return p;  // 返回不大于e的最大元素，此性质很有用
}