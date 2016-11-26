int *buildNext(char *P)
{
	size_t m = strlen(P), j = 0;
	int *N = new int[m];
	int t = N[0] = -1;
	while (j < m - 1)
		if (0 > t || P[j] == P[t])
		{
			++j;
			++t;
			N[j] = (P[j] != P[t]) ? t : N[t];
		}
		else
			t = N[t];
	return N;
}