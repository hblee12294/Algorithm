#include <iostream>

using namespace std;

int main()
{
    extern void shuffle(int A[], int n);

    int arr[6] = {1, 2, 3, 4, 5, 6};
    shuffle(arr, 6);
    for (int i = 0; i < 6; ++i)
        cout << arr[i] << endl;

	return 0;
}
