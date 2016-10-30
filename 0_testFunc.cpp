#include <iostream>
#include <Vector>

using namespace std;

int main()
{



	return 0;
}

template <typename T>
void Vector<T>::mergeSort(int lo, int hi)
{
	if (hi - lo < 2)        // ��Ԫ��������Ȼ����
		return;
	int mi = (lo + hi) / 2;
	mergeSort(lo, mi);
	mergeSort(lo, hi);       // why is lo here, but not (lo + 1) ?
	merge(lo, mi, hi);
}

template <typename T>
void Vector<T>::merge(Rank lo, Rank mi, Rank hi)
{
	T *A = _elem + lo;    // A[0, hi - lo)��Ҳ����Ҫ����Ķ�
	int lb = mi - lo;
	T *B = new T[lb];     // BΪA��0-mi�ĸ���
	for (Rank i = 0; i < lb; B[i] = A[i++]);  //  B copy from A
	int lc = hi - mi;
	T *C = _elem + mi;
	Ranki = 0, j = 0, k = 0;
	while ((j < lb) && (k < lc))            // �����Ƚ�B��C����Ԫ�أ�С�߷���A�У�Aһ��ʼ����Ķ��������ǣ�
	{
		while ((j < lb) && B[j] <= C[k]) A[i++] = B[j++];    // һ��B��C�е�һ���Ⱥ���
		while ((k < lc) && C[k] <= B[j]) A[i++] = C[k++];    //ʣ�µ�����Ͳ���A��ĩβ��
	}
	while (j < lb) A[i++] = B[j++];
	delete [] B;
}
