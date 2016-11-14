Tv remove(int i)
{
	for (int j = 0; j < n; ++j)
	{
		if (exists(i, j))
		{
			--e;
			V[j]->inDegree--;
		}
		if (exists(j, i))
		{
			--e;
			V[j]->outDegree;
		}
		if (exists(i, i))
			++e;
		Tv d = V.remove(i)->data;
		E.remove(i);
		--n;
		for (int j = 0; j < n; ++j)
			E[j].remove(i);
		return d;
	}
}