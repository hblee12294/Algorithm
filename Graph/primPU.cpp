g->pfs(0, PrimPU<char, int>());

template <typename Tv, typename Te>
struct PrimPU
{
	virtaul void operator()(Graph<Tv, Te> *g, int uk,int v)
	{
		if (g->status(v) == UNDISCOVERED)
			if (g->priority(v) > g->weight(uk, v))
			{
				g->priority(v) = g->weight(uk, v);
				g->parent(v) = uk;
			}                                        // 更新器的原理不懂
	} 
};