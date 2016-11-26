int match(char *P, char *T)
{
	int *next = buildNext(P);  // 查询表
	int n = (int) strlen(T), i = 0;      // 主串指针
	int m = (int) strlen(P), j = 0;      // 模式串指针

	while (j < m && i < n)
		if (0 > j || T[i] == P[j])  // 匹配，或移出模式串
			{ ++i; ++j; }
		else
			j = next[j];     // 按照查询表，模式串右移

	delete [] next;
	return i - j;
}