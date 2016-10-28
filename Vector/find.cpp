template <typename T>
Rank Vector<T>::find(T const &e, Rank lo, Rank hi) const
{
	while ((lo < --hi) && (-elem[hi] != e));
	return hi; // find: hi = Rank(e)
			   // not find: hi = lo
}