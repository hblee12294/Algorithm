#include <iostream>

using namespace std;

int main()
{
    extern void reverse(int *A, int lo, int hi);
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    reverse(arr, 0, 6);
    for (int i = 0; i < 7; ++i)
        cout << arr[i];
    cout << endl;

	return 0;
}
