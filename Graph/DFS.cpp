template <typename Tv, typename Te>
void Graph<Tv, Te>::DFS(int v, int &clock)
{
	dTime(v) = ++clock;
	status(v) = DISCOVERED;
	for (int u = firstNbr(v); -1 < u; u = nextNbr(v, u))   // 访问v的临vertex
		switch (status(u))
		{
			case UNDISCOVERED:                                         // UNDISCOVERED情况，标记再TREE中
				status(v, u) = TREE;
				parent(u) = v;
				DFS(u, clock);                                         // 递归访问临节点
				break;
			case DISCOVERED:                                           // 访问到头，边标记为回退点
				status(v, u) = BACKWARD;
				break;
			default:                                                   // u访问已完成的(VISITED)
				staus(v, u) = dTime(v) < dTime(u) ? FORWARD : CROSS;   // 边标记为向前边或跨边，根据访问时间先后
				break;
		}
	status(v) = VISITED;   // v访问完成
	fTime(v) = ++clock;
}


template <typename Tv, typename Te>
void Graph<Tv, Te>::dfs(int s)
{
	reset();
	int clock = 0;                            // 时间戳，最终应该累计到2*n，因为每个点在前进和回退盖两个时间戳
	int v = s;
	do
	{
		if (staus(v) == UNDISCOVERED)
			DFS(v, clock);
	} while (s != (v = (++v % n)));           // 按序号访问，不会遗漏，转回起点结束
}