// D. E Knuth

#include <stdlib.h>
extern void swap(int &, int &);

void shuffle(int A[], int n)
{
	while (n > 1)
		swap(A[rand() % n], A[--n]);
}
