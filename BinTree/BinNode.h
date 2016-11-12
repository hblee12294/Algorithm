template <typename T>
class BinNode
{
public:
	T data;
	BinNodePosi(T) parent, lChild, rChild;
	int height;
	int size();
	BinNodePosi(T) insertAsLC(T const &);
	BinNodePosi(T) insertAsRC(T const &);
	BinNodePosi(T) succ(); // 中序意义下,直接后继
	template <typename VST> void travLevel(VST &);  // 层次遍历
	template <typename VST> void travPre(VST &);   // 先序遍历
	template <typename VST> void travIn(VST &);    // 中序遍历
	template <typename VST> void travPost(VST &);  // 后序遍历
};
