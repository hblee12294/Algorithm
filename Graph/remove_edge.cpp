Te remove(int i, int j)
{
	if (!exists(i, j))
		return NULL;
	Te edge = E[i][j]->data;
	--e;
	E[i][j] = NULL;
	V[i]->outDegree--;
	V[j]->inDegree--;
	return edge;
}