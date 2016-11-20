template <typename T>
class Dictionary
{
public:
	virtual int size() = 0;
	virtual bool put(K, V) = 0;
	virtual V *get(K k) = 0;
	virtual bool remove(K k) = 0;
}