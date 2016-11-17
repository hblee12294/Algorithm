g->pfs(0, Dijkstra<char, int>());

template <typename Tv, typename Te>
struct DijsktraPU
{
	virtual void  operator()(Graph<Tv, Te> *g, int uk, int v)
	{
		if（g->status(v) > g->priority(uk) + g->weight(uk, v)）
		{
			g->priority(v) = g->priority(uk) + g->weight(uk, v);
			g->parent(v) = uk;
		}
	}
};