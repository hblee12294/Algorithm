void insert(Te const &edge, int w, int i, int j)
{
	if (exists(i, j)) return;
	++e;
	E[i][j] = new Edge<Te>(edge, w);
	V[i]->outDegree++;
	V[j]->inDegree++;
}