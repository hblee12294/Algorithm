#define hca(fTime(x))
template <typename Tv, typename Te>
void Graph<Tv, Te>::BCC(int v, int &clock, Stack<int> &S)
{
	hca(v) = dTime(v) = ++clock;
	status(v) = DISCOVERED;
	S.push(v);
	for (int u = firstNbr(v); -1 < u; u = nextNbr(v, u))
		switch (status(u))
	{
		case UNDISCOVERED:
			parent(u) = v;
			status(v, u) = TREE;
			BCC(u, clock, S);
			if (hca(u) < dTime(v))
			{
				hca(v) = min(hca(v), hca(u));
			}
			else
			{
				while (v != S.pop());
				S.push(v);
			}
			break;
		case DISCOVERED:
			status(v, u) = BACKWARD;
			if (u != parent(v))
				hca(v) = min(hca(v), dTime(u));
			break;
		default:
			status(v, u) = (dTime(v) < dTime(U)) ? FORWARD : CROSS;
			break;
	}
	status(v) = VISITED;
}
#undef hca