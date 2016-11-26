int *buildNext(char *P)
{
	size_t m = strlen(P), j = 0;
	int *N = new int[m];
	int t = N[0] = -1;   // 最左侧添加通配符
	while (j < m - 1)
		if (0 > t || P[j] == P[t])
		{
			++j;
			++t;
			N[j] = t;
		}
		else
			t = N[t];
	return N;
}