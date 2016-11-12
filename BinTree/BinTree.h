template <typename T>
class BinTree
{
protected:
	int _size;
	BinNodePosi(T) _root;
	virtual int updateHeight(BinNodePosi(T) x);
	void updateHeightAboeve(BinNodePosi(T) x);
public:
	int &size() { return _size; }
	bool empty() const { return !_root; }
	BinNodePosi(T) &root() { return _root; }
	
	/*-----interfaces----------*/
};