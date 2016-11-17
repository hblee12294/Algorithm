template <typename K, typename V>
struct Entry
{
	K key;
	V value;
	Entry(K k, V v) : key(k), value(v) {};
	bool operator<(Entry<K, V> const &e) { return key < e.key; }
	bool operator>(Entry<K, V> const &e) { return key > e.key; }
	bool operator==(Entry<K, V> const &e) { return key == e.key; }
	bool operator!=(Entry<K, V> const &e) { return key != e.key; }
};