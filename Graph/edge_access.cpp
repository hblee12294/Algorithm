bool exists(int i, int j)
{
	return (0 <= i) && (i < n) && (0 <= j) && (j < n) && E[i][j] != NULL;
}

Te edge(int i, int j)
{
	return E[i][j]->data;
}

EStatus &staus(int i, int j)
{
	return E[i][j]->status;
}

int &weight(int i, int j)
{
	return E[i][j]->weight;
}