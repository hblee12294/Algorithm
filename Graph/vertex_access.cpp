Tv vertex(int i)
{
	return V[i]->data;
}

int inDegree(int i)
{
	return V[i]->inDegree;
}

int outDegree(int i)
{
	return V[i]->outDegree;
}

int firstNbr(int i)
{
	return nextNbr(i, n);
}

int nextNbr(int i, int j)
{
	while ((-1 < j) && (!exists(i, --j)));  // 寻找过程， 一直找，直到j=-1或（i,j）为1时
	return j
}

Vstatus &status(int i)
{
	return V[i]->status;
}

int &dTime(int i)
{
	return V[i]->dTime;
}

int &fTime(int i)
{
	return V[i]->fTime;
}

int &parent(int i)
{
	return V[i]->parent;
}

int &priority(int i)
{
	return V[i]->priority;
}