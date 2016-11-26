int match(char *P, char *T)
{
	size_t n = strlen(T), i = 0;
	size_t m = strlen(P), j = 0;

	while (j < m && i < n)
		if (T[i] == P[j])      // match
			{ ++i; ++j; }
		else                   // unmatch
			{ i -= j - 1; j = 0; }

	return i - j;       // return location of start
}