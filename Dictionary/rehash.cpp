template <typename K, typename V>
void Hashtable<K, V>::rehash()
{
	int old_capacity = M;
	Entry<K, V> **old_ht = ht;
	N = 0;
	ht = new Entry<K, V> *[M = primeNLT(2*M)];
	memset(ht, 0, sizeof(Entry<K, V>*)*M);
	release(lazyRemoval);
	lazyRemoval = new Bitmap(M);
	for (itn i = 0; i < old_capacity; ++i)
		if (old_ht[i])
			put(old_ht[i]->key, old_ht[i]->value);
	release(old_ht);
}