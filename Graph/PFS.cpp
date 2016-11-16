template <typename Tv, typename Te>
template <typename PU>
void Grapgh<Tv, Te>::pfs(int s, PU prioUpdater)     // PU优先级更新器
{
	reset();
	priority(s) = 0;     // s优先级标0(优先级与数大小成反比)
	status(s) = VISITED;
	parent(s) = -1;
	for (int i = 1; i < n; ++i)    // 每个顶点访问
	{
		for (int w = firstNbr(s); -1 < w; w = nextNbr(s, w))  // 从该顶定跳到邻节点们
			prioUpdater(this, s, w);                          // 更新s和w的优先级
		for (int shortest = INT_MAX, w = 0; w < n; ++w)       // INT_MAX是最小优先级，
			if (status(w) == UNDISCOVERD)                     // 如果该点未在遍历树中
				if (shortest > priority(w))                   // w'的优先级比当前优先级小(第一次为最小)
				{
					shortest = priority(w);                   // 将这个w点赋给s，成为新的s
					s = w;                                    // 同时更新shortest和s
				}
		status(s) = VISITED;                                   // 将新的s加入VISITED中，并把边标为TREE
		status(parent(s), s) = TREE;
	}                                                          // 开始下一轮访问
}