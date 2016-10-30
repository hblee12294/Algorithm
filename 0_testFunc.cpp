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
	if (hi - lo < 2)        // 单元素区间自然有序
		return;
	int mi = (lo + hi) / 2;
	mergeSort(lo, mi);
	mergeSort(lo, hi);       // why is lo here, but not (lo + 1) ?
	merge(lo, mi, hi);
}

template <typename T>
void Vector<T>::merge(Rank lo, Rank mi, Rank hi)
{
	T *A = _elem + lo;    // A[0, hi - lo)，也就是要排序的段
	int lb = mi - lo;
	T *B = new T[lb];     // B为A中0-mi的复制
	for (Rank i = 0; i < lb; B[i] = A[i++]);  //  B copy from A
	int lc = hi - mi;
	T *C = _elem + mi;
	Ranki = 0, j = 0, k = 0;
	while ((j < lb) && (k < lc))            // 反复比较B和C的首元素，小者放入A中（A一开始里面的东西被覆盖）
	{
		while ((j < lb) && B[j] <= C[k]) A[i++] = B[j++];    // 一旦B和C中的一列先耗完
		while ((k < lc) && C[k] <= B[j]) A[i++] = C[k++];    //剩下的整体就并入A的末尾了
	}
	while (j < lb) A[i++] = B[j++];
	delete [] B;
}
