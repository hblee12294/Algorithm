template <typename Tv, typename Te>
bool Graph<Tv, Te>::TSort(int v, int &clock, Stack<Tv> *S)    // 将有向图转化为一个DAG，如果有环返回false
{
	dTime(v) = ++clock;
	status(v) = DISCOVERED;                                   // 起始点标记为DISCOVERED
	for (int u = firstNbr(v); -1 < u; u = nextNbr(v, u))      // 和其他遍历图方法一样
		switch(status(u))
		{
			case UNDISCOVERED:                               // 未发现的话，边标记TREE
				parent(u) = v;                              
				status(v, u) = TREE;
				if (!TSort(u, clock, S)) return false;
				break;
			case DISCOVERED:                                 // 如果发现的话，说明出现了回路，之前访问过的点又被访问了，因此需要返回false
				status(v, u) = BACKWARD;
				return false;
				break;
			default:
				status(v, u) = (dTime(v) < dTime(u)) ? FORWARD : CROSS;      // 其他情况就是FORWARD边和CROSS边了
				break;
		}
	status(v) = VISITED;
	S->push(vertex(v));               // 起始节点标记并入栈，成功找到一个DAG
	return true;
}